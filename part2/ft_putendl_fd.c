#include "./../libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		ft_putchar_fd(*(s + i) + '0', fd);
	ft_putchar_fd('\n', fd);
}
