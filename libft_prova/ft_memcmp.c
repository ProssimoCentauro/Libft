#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *s1_c;
    unsigned char   *s2_c;
    size_t  i;
    int sign;

    s1_c = (unsigned char *)s1;
    s2_c = (unsigned char *)s2;
    i = 0;
    sign = 1;

    while (s1_c[i] != '\0' && s2_c[i] != '\0' && s1_c[i] == s2_c[i] && i < n)
        i++;
    if (s1_c[i] - s2_c[i] == 0)
        return (0);
    if (s1_c[i] - s2_c[i] < 0)
        sign = -sign;
    return (sign);
}
