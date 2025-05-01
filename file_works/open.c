#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

extern int	errno;

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY | O_CREAT);
	printf("fd = %d\n", fd);
	if (fd == -1)
	{
		printf("Error no: %d\n", errno);
		perror("program");
	}
	return (0);
}
