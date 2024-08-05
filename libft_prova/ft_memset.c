#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *buffer;
    buffer = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        buffer[i] = (unsigned char)c;
        i++;
    }
    return (buffer);
}
