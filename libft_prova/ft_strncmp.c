#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}
