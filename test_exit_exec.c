#include <unistd.h>
#include <stdio.h>

extern char **environ;

int main()
{
	char *cmds[3] = {"exit","45",NULL};

	printf("Pre execv\n");
	execve(cmds[0], cmds, environ);
	printf("Pos execv\n");

	return (10);
}
