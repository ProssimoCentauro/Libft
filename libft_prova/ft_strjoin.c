#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *dest;
    size_t  i;
    size_t  j;
    dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!dest)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        dest[i] = s2[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
