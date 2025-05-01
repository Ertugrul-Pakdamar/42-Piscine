#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	fd;

	fd = creat("test.txt", 0744);
	if (fd == -1)
	{
		printf("Error while creating file");
		return (1);
	}
	printf("File test.txt created successfully\nFilde Descriptor: %d", fd);
	close(fd);
	return (0);
}
