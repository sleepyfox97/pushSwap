#include "./libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int i;
	int fd;
	char *line;

	if (argc != 2 && argc != 1)
		return (0);
	i = 1;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while(i > 0)
		{
			i = get_next_line(fd, &line);
			printf("i = %d| %s\n",i,line);
		}
	}
	else if (argc == 1)
	{
		while(i > 0)
		{
			i = get_next_line(0, &line);
			printf("i = %d| %s\n",i,line);
		}
	}
	return (0);
}