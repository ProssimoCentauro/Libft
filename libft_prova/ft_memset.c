#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *buffer;

    buffer = (unsigned char *) s;
    while (n--)
        buffer[n] = (unsigned char) c;
    return (s);
}
