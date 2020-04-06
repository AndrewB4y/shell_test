#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	//char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	//char *argv[] = {"ls_m", NULL};
	char *argv[] = {"/bin/bash", "ls_m", NULL};

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		//perror("Error:");
	}
	printf("After execve\n");
	perror("Error:");
	return (0);
}
