#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	size_t bytes = 0;
	char *b = NULL;  /*remember to free*/
	size_t bsize = 0;
	char *token;

	printf("$ ");
	bytes = getline(&b, &bsize, stdin);
	printf("you typed: %s", b);
	token = strtok(b, " ");
	while (token != NULL)
	{
		printf("token: %s\n",token);
		token = strtok(NULL, " \n");
	}

	free(b);

	return (0);
}
