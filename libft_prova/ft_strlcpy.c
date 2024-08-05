#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    char    *src_cast;

    i = 0;
    src_cast = (char *)src;
    while (i < size)
    {
        dst[i] = src_cast[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}