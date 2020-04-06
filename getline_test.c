#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t bytes = 0;
	char *b = NULL;  /*remember to free*/
	size_t bsize = 0;

	printf("$ ");
	bytes = getline(&b, &bsize, stdin);
	printf("you typed: %s", b);

	free(b);

	return (0);
}
