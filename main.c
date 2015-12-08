#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>


int main()
{
	int fd = open("test", O_RDONLY);

	char *line = NULL;
	int b;
	b = get_next_line(fd, &line);
	printf("%d\n%s",b, line);
	//printf("efghijkl");
	return (0);
}
