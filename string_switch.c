#include <stdio.h>

void changing_func(char **token);

int main()
{
	char *token = "here's something to change\n";

	printf("token pre: %s", token);
	changing_func(&token);
	printf("token post: %s", token);
}


void changing_func(char **token)
{
	printf("token pre inside func: %s", *token);
	*token = "This is the thing changed\n";
	printf("token post inside func: %s", *token);
}
