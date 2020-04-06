#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	char *buffer = NULL;
	size_t size = 0;
	ssize_t bytes = 0;

	if (isatty(STDIN_FILENO) != 1)
	{
		printf("there is an input from stdin\n");
		bytes = getline(&buffer, &size, stdin);
		while (bytes != -1)
		{
			printf("bytes: %d\tinput: %s", (int)bytes, buffer);
			bytes = getline(&buffer, &size, stdin);
		}
	}
	else
	{
		printf("no stdin input\n");
	}
	printf("prueba al final\n");

	return (0);
}
