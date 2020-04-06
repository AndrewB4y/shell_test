#include <stdio.h>
#include <unistd.h>
int main()
{
	int id;

	id = fork();
	printf("PID: %d\n", id);
	(id = fork()) && (id = fork()) || (id = fork());
	printf("PID: %d\n", id);
	id = fork();
	printf("PID: %d\n", id);

	printf("forked\n");
	return 0;
}
