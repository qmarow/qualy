#include "./../libft.h"

static int	ft_numlen(int n)
{
	int i;

	i = 0;
	while (n)
	{
		n /= 10;
		++i;
	}
	return i;
}

char	*ft_itoa(int n)
{
	int		num;
	char	*str;

	num = ft_numlen(n);
	str = (char*)malloc(sizeof(char) * (num + 1));
	*(str + num) = '\0';
	while (n)
	{
		*(str + --num) = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}