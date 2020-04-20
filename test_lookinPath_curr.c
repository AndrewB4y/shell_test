#include "shellby.h"


int main(int argc, char *argv[])
{
	char *token = NULL, *heap_token = NULL;

	if (argc < 2)
		return (0);

	token = argv[1];
	printf("Token before: %s\n", token);
	heap_token = look_inPATH(&token);
	printf("Token after: %s\n", token);

	if (heap_token != NULL)
		free(heap_token);

	return (0);
}
