#include "shellby.h"
#include <stdio.h>

int main(int ac, char *av[], char *envp[])
{
	char **paths = NULL;
	int i = 0;

	printf("Start test\n");
	printf("Argc: %d\n", ac);
	printf("Argv[0]: %s\n", av[0]);
	paths = store_paths(envp);

	while (paths[i] != NULL)
	{
		printf("PATH[%d]: %s\n", i, paths[i]);
		i++;
	}
	free(paths);

	return (0);
}
