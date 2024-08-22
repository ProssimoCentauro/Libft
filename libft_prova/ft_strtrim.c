#include "libft.h"

#include <stdio.h>

static size_t  index_calc(char const *s1, char const *set)
{
    size_t  k;
    size_t  i;

    k = 0;
    i = 0;
    while (1)
    {
        k = 0;
        while (set[k])
        {
            if (s1[i] == set[k])
            {
                i++;
                break;
            }
            k++;
        }
        if (k == ft_strlen(set))
            break;
    }
    return (i);
}
static size_t  index_calc_rev(char const *s1, char const *set)
{
    size_t  k;
    size_t  j;

    k = 0;
    j = ft_strlen(s1) - 1;
    while (1)
    {
        k = 0;
        while (set[k])
        {
            if (s1[j] == set[k])
            {
                j--;
                break;
            }
            k++;
        }
        if (k == ft_strlen(set))
            break;
    }
    return (j);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    size_t  k;
    char    *dest;
    
    printf("%ld\n", index_calc(s1, set));
    printf("%ld\n", index_calc_rev(s1, set));
    i = index_calc(s1, set);
    j = index_calc_rev(s1, set);
    k = 0;
    dest = (char *)malloc((j - i) + 2);
    if  (!dest)
        return (NULL);
    while (i <= j)
    {
        dest[k] = s1[i];
        k++;
        i++;
    }
    return (dest);
}

int main(int ac, char** av)
{
    (void)ac;
    printf("%p\n", ft_strtrim(av[1], av[2]));
    return 0;
}
