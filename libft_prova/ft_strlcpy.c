#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    if (!size)
        return (ft_strlen(src));
    dst[size + 1] = '\0';
    while (size--)
        dst[size] = src[size];
    return (ft_strlen(dst));
}
