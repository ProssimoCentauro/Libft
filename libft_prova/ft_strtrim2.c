//#include "libft.h"

#include <stdio.h>
char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    size_t  k;
    char    *dest;

    i = 0;
    j = ft_strlen(s1) - 1;
    k = 0;

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
    dest = (char *)malloc((j - i) + 2);
    k = 0;
    while (i <= j)
    {
        dest[k] = s1[i];
        k++;
        i++;
    }
    dest[k] = '\0';
    return dest;
}
int main(int argc, char **argv)
{
    (void)argc;
    printf("%s\n", ft_strtrim(argv[1], argv[2]));
    return 0;
}
