#include <stdio.h>
#include <string.h>

void sigue_strtok();

int main(int argc, char *argv[])
{
	char *text;

	if (argc < 2)
		return (0);

	text = argv[1];
	printf("Text: %s\n", text);
	printf("First token: %s\n", strtok(text, " \n"));
	sigue_strtok();
	printf("What is the text: %s\n", text);
	printf("Fin\n");
	return (0);
}


void sigue_strtok()
{
	char *token = NULL;

	token = strtok(NULL, " \n");
	while (token != NULL)
	{
		printf("Next token: %s\n", token);
		token = strtok(NULL, " \n");
	}
}
