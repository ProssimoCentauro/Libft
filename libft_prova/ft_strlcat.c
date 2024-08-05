#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t k;
    char    *src_cast;

    i = 0;
    k = 0;
    src_cast = (char *)src;
    while (dst[i] != '\0')
        i++;
    while (k < size)
    {
        dst[i] = src_cast[k];
        k++;
        i++;
    }
    src_cast[k] = '\0';
    return(ft_strlen(dst));
}