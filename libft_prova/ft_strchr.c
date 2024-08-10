#include <stdio.h>
#include "libft.h"
char    *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if ((char)s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    return (NULL);
}

int main()
{
    printf(NULL);
    printf("%s\n", ft_strchr("ciaocipo", 'k'));
}
