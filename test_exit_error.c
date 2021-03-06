/* from https://www.geeksforgeeks.org/exit-status-child-process-linux/ */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

// Driver code
int main(void)
{
	int status, exit_status = 0;
	char *args[4] = {"./asdsh", "-c", "./nopath", NULL};
	pid_t pid = fork();

	if ( pid == 0 )
	{
		/* The pathname of the file passed to execl()
		   is not defined   */
		/*execl("/bin/sh", "bin/sh", "-c", "./nopath", "NULL");*/
		execve(args[0], args, environ);
		perror("Error");
		printf("Child alive\n");
	}

	waitpid(pid, &status, 0);

	if ( WIFEXITED(status) )
	{
		exit_status = WEXITSTATUS(status);
		printf("PID: %d\n", pid);
		printf("Exit status of the child was %d\n", exit_status);
	}
	return 0;
}
