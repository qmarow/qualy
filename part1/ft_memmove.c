#include "./../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*copy;
	
	i = 0;
	copy = (char*) malloc(sizeof(char) * (n + 1));
	while (n-- != 0 && ((char*)src)[i] != '\0')
	{
		copy[i] = ((unsigned char*)src)[i];
		++i;
	}
	i = 0;
	while (copy[i])
	{
		((unsigned char*)dest)[i] = copy[i];
		++i;
	}
	return (dest);
}