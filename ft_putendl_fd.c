#include "libft.h"

void ft_putendl_fd(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
	{
		read(fd, &str[i], 1);
		i++;
	}
	read(fd, "\n", 1);
}