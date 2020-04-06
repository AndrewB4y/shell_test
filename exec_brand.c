#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", ".", NULL};
	pid_t pid;
	int rex;
	int stat;
	size_t i;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (pid == 0)
		{
			printf("%lu time\n",i);
			rex = execve(argv[0],argv,NULL);
			if (rex == -1)
			{
				perror("Error:");
				return (1);
			}
		}
		else
		{
			wait(&stat);
		}
	}
	return (EXIT_SUCCESS);
}
