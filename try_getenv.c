#include "shellby.h"
#include <stdio.h>

int main(void)
{
	char *env_var = NULL;

	env_var = _getenv("PATH");
	printf("variable: %s\n", env_var);
	printf("vairable2: %s\n", environ[8]);
	return (0);
}
