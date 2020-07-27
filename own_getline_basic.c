#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char buf[10], *str = NULL, *token = NULL;
	int n = 0, full = 0, i = 0, b = 0;

	n = read(STDIN_FILENO, buf, 10);

	while (n == 10)
	{
		full += n;
		str = realloc(str, full);
		while (b < 10)
			str[i++] = buf[b++];
		b = 0;
		n = read(STDIN_FILENO, buf, 10);
	}
	full += n;
	str = realloc(str, full);
	while (b < n)
		str[i++] = buf[b++];

	token = strtok(str, "\n");
	printf("Input: %s\n", token);

	return (0);
}
