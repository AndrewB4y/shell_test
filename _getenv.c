#include "shellby.h"
#include <stdio.h>
/**
 * _getenv - finds a specific environment variable.
 * @name: name of the variable to look for.
 *
 * Return: char pointer to the environment variable.
 */

char *_getenv(const char *name)
{
	int i;
	char *token = NULL;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("varPre: %s\n", environ[i]);
		token = strtok(environ[i], "=");
		printf("varPos: %s\n", environ[i]);
		if (strcmp(token, name) == 0)
			break;
		i++;
	}
	if (environ[i] == NULL)
		return (NULL);
	token = strtok(NULL, "\n");
	return (token);
}
