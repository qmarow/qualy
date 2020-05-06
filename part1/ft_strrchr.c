#include "./../libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;
	int f;

	i = -1;
	f = 0;
	while (*(str + ++i) != '\0')
	       if (*(str + i) == ch)
		       f = i;
	if (f)
		return ((char*)(str + f));
	return (NULL);
}
