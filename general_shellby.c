#include "shellby.c"

/**
 * main - execution of the shellby shell.
 * @argc: number of input arguments.
 * @argv: input arguments array.
 * @envp: string array with the envornment.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[], char *envp[])
{
	char *commands[], *paths[];
	char *buffer = NULL, token = NULL;
	size_t size = 0;

	paths = store_paths(envp);

	if (isatty(STDIN_FILENO) != 1 || argc > 1)
	{
		non_inter_shellby(paths, envp);
	}
	else
	{
		inter_shellby(paths, envp);
	}

	return (0);
}
