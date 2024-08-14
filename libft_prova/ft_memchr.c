#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char  *s_cast;
    unsigned char c_cast;
    size_t  i;

    s_cast = (const unsigned char *)s;
    c_cast = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (s_cast[i] == c_cast)
            return ((void *)&s_cast[i]);
        i++;
    }
    return (NULL);
}
