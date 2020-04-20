#include <stdio.h>
#include <unistd.h>



int main(int argc, char *argv[], char *envp[])
{
	char *str = "/usr/bin/env";
	char *args[2] = {"env",NULL};

	printf("Impresion!!!! %d\t%s\n",argc,argv[0]);
	execve(str, args, envp);
	perror("Error");
	return (0);
}
