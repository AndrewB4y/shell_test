#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

int main(void)
{
	size_t bytes = 0;
	char *b = NULL;  /*remember to free*/
	size_t bsize = 0;
	char *token, *a[2]={NULL, NULL};
	pid_t child_pid, my_pid;
	int status;

	while (1)
	{
		printf("$ ");
		bytes = getline(&b, &bsize, stdin);
		printf("Bytes read in prompt: %u\n", (unsigned int)bytes);
		token = strtok(b, " \n\t");
		printf("Token: %s\n", token);
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		a[0] = token;
		my_pid = getpid();
		if(child_pid == 0)
		{
			printf("Child process \n");
			if (execve(a[0], a, NULL) == -1)
			{
				perror("Error:");
				printf("Unkown\n");
				exit(0);
			}
		}
		wait(&status);
	}

	free(b);

	return (0);
}
