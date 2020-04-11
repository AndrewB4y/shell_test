#include "shellby.h"

/**
 * free_str_arr - frees a NULL terminated array of strings, strings included.
 * @arr: char pointers array to be freed.
 *
 * Return: void.
 */

void free_str_arr(char **arr)
{
	int i;

	if (arr == NULL)
		return;

	if (*arr == NULL)
		return;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
