#include <string.h>
#include <stdio.h>

int main()
{
	char buffer[20];
	char text[20];
	char *token = NULL, *ptr = NULL;
	int last = 0;

	strcpy(buffer, "ls -l -o -a\n");
	strcpy(text, "una prueba x");

	token = strtok(buffer, " \n\t\r");
	printf("Token de buffer: %s\n", token);
	ptr = token;
	last = strlen(token) + 1;
	token = strtok(text, " \n\t\r");
	printf("Token de text: %s\n", token);


	token = strtok(ptr + last, " \n\t\r");
	printf("Token prueba: %s\n", token);
	token = strtok(NULL, " \n\t\r");
	printf("Token prueba: %s\n", token);
	return (0);
}
