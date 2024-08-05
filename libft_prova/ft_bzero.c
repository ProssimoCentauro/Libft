#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    int i;
    char    *buffer;

    i = 0;
    buffer = (char *)s;
    while (i < n)
    {
        buffer[i] = 0;
        i++;
    }
    return (buffer);
}