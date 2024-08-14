#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  ini_i;

    i = 0;
    j = 0;
    ini_i = i;
    if (little[0] == '\0')
        return ((char *)big);
    while (i < len)
    {
        ini_i = i;
        if (big[i] == little[j])
        {
            while (big[ini_i] == little[j] && little[j] != '\0')
            {
                ini_i++;
                j++;
            }
            if (little[j] == '\0')
                return ((char *)&big[i]);
        }
        j = 0;
        i++;
    }
    return (NULL);
}
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%p\n", ft_strnstr("ciaocome", "ocome", 3));
    //printf("%s\n", strnstr("ciaocome", "ocome", 7));
    return 0;
}
