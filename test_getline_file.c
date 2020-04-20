#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int *fd;
	ssize_t line_bytes = 0;
	char *buffer = NULL;
	size_t buffer_sz = 0;

	if (argc < 2)
		return (0);

	fd = open(argv[1], O_RDONLY);


	return (0);
}
