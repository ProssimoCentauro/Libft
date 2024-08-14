#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int  i;

    i = ft_strlen(s);
    while (i != -1)
    {
        if (s[i] == c)
            return ((char*)&s[i]);
        i--;
    }
    return (NULL);
}
