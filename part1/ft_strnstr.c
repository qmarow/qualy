#include "./../libft.h"

char	*ft_strnstr(const char *big, const char *l, size_t len)
{
    char    *copy;
    int     i;
	int		a;
    int		flag;

    copy = (char*)big;
    i = -1;
	a = 0;
	flag = -1;
    while (*(copy + ++i) && len && flag == -1)
    {
		while ((*(copy + i) == *((char*)l + a)) != '\0' && len)
        {
			if (flag == -1)
				flag = i;
            if (*(copy + i) == *((char*)l + a) && *((char*)l + a + 1) == '\0' && len--)
				return ((copy + flag));	
			++a;
			++i;		
        }
		--len;
    }
    return(NULL);
}