#include "shellby.h"


int main(int argc, char *argv[])
{
	char **paths = NULL;
	char *token = NULL, *heap_token = NULL;

	if (argc < 2)
		return (0);

	paths = store_paths(environ);
	token = argv[1];

	printf("Token before: %s\n", token);
	heap_token = look_inPATH(&token, paths);
	printf("Token after: %s\n", token);

	if (heap_token != NULL)
		free(heap_token);
	free(paths);
	return (0);
}
