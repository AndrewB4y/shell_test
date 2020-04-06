#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac > 1)
		printf("Bien\n");

	while(av[i] != NULL)
	{
		printf("%s\n", av[i++]);
	}

	return (0);
}
