#include "./../libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (*(str1 + i) == *(str2 + i))
		return (0);
	while (*(str1 + i) == *(str2 + i) && i <= n)
	{
		++i;
		if (*(str1 + i) > *(str2 + i) && i <= n)
			return (1);
		else if (*(str1 + i) < *(str2 + i) && i <= n)
			return (-1); 
	}
	return 0;
}