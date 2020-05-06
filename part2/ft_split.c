#include "./../libft.h"

static int	ft_strl_l(const char *s, int *i, char c)
{
	int a;

	a = 0;
	while (*(s + ++(*i)) != c && *(s + *i) != '\0')
		++a;
	return a;
}

static int	ft_strl(const char *s,char c)
{
	int i;
	int a;

	i = -1;
	a = 0;
	while (*(s + ++i))
		if (*(s + i) == c)
			++a;
	return ++a;
}

static char	**ft_record(const char *s, char c, char **str)
{
	int i;
	int a;
	int b;

	i = -1;
	a = 0;
	b = -1;
	while (*(s + ++i) != '\0')
	{
		if (*(s + i) == c)
		{
			str[a][++b] = '\0';
			++a;
			b = -1;
			++i;
		}
		str[a][++b] = *(s + i);
	}
	str[a][++b] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	count;
	char	**str;
	int	t;

	i = -1;
	t = -1;
	count = ft_strl(s, c);
	if (count == 0)
		return NULL;
	str = (char**)malloc(sizeof(char*) * (count + 1));
	if (!str)
		return (NULL);
	*(str + count) = 0;
	while(count--)
	{
		*(str + ++t) = (char*)malloc(sizeof(char) * (ft_strl_l(s, &i, c) + 1));
	}
	return (ft_record(s, c, str));
}