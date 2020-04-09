#include "shellby.h"



char **input_tokens(char *token)
{
	char **cmnds = NULL;
	size_t c_size = 0;
	int i = 0;
	unsigned int token_len = 0;

	token_len = _strlen(token);

	while (token != NULL)
	{
		cmnds = _realloc(cmnds, c_size, c_size + sizeof(char *));
		if (cmnds == NULL)
			return (NULL);
		c_size += sizeof(char *);
		cmnds[i] = malloc(token_len);
		cmnds[i] = _strcpy(cmnds[i], token);
		token = strtok(NULL, " \n\t\r");
		i++;
	}
	cmnds = _realloc(cmnds, c_size, c_size + sizeof(char *));
	if (cmnds == NULL)
		return (NULL);
	c_size += sizeof(char *);
	cmnds[i] = NULL;

	return (cmnds);
}
