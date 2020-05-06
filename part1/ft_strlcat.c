#include "./../libft.h"

size_t		ft_strlcat(char *dsr, const char *src, size_t size)
{
	int		i;
	size_t	len;

	i = -1;
	len = (size_t)ft_strlen(dsr);
	if (size > 0)
	{
		while (*(dsr + ++i) && size > 0)
			--size;
		while (*src && size-- > 1)
			*(dsr + i++) = *src++;
		*(dsr + i) = '\0';
	}
	return (len);
}
