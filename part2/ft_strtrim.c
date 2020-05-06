#include "./../libft.h"

int	ft_chr(const char *str, int ch)
{
	int i;

	i = -1;
	while (*(str + ++i))
		if (*(str + i) == ch)
			return 0;
	return 1;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	i;
	int	sz;

	i = -1;
	sz = 0;
	while (*(s1 + ++i) != '\0')
	{
		if (ft_chr(set, *(s1 + i)))
			++sz;
	}
	str = (char*)malloc(sizeof(char) * (sz + 1));
	*(str + sz) = '\0';
	while (--i)
	{
		if (ft_chr(set, *(s1 + i)))
			*(str + --sz) = *((char*)s1 + i);
	}
	return (str);
}
