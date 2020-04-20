#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int acc = 0;

	if (argc < 2)
		return (0);

	printf("Good!!! args!!\n");
	acc = access(argv[1], R_OK);
	if (acc == -1)
	{
		perror("Error ");
		return (-1);
	}
	printf("File OK!\n");
	return (0);
}
