#include "./../libft.h"

void	ft_putstr(char *s, int fd)
{
	int i;

	i = -1;
	while (*(s + ++i) != '\0')
		ft_putchar_fd(*(s + i) + '0', fd);
}
