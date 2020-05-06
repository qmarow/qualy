#include "./../libft.h"

char	*ft_substr(char const * s, unsigned int start, size_t len)
{
	char	*str;
	int	i;

	i = -1;
	str = (char*)malloc(sizeof(char) * (len + 1));
	while (*(s + start) != '\0' && len--)
		*(str + ++i) = *(s + start++);
	++i;
	*(str + i) = '\0';
	return (str);
}
