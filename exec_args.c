#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char **temp = NULL;
	int i, error = 0;

	if (argc < 2)
		return (0);

	printf("Good!!! args!!\n");
	temp = malloc(sizeof(char *) * argc);

	i = 1;
	while (argv[i] != NULL)
	{
		temp[i - 1] = argv[i];
		i++;
	}
	temp[i - 1] = NULL;
	printf("Sending to execve...\n");
	error = execve(temp[0], temp, NULL);
	printf("Execve failed!!! Code: %d\n", error);
	perror("Error ");
	return (0);
}
