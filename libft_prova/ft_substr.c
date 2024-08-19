#include "libft.h"

static size_t  count_from_start(char const *str, unsigned int start)
{
    size_t  count;

    count = 0;
    while (str[start])
    {
        count++;
        start++;
    }
    return (count);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *res;
    size_t  count;

    i = 0;
    count = count_from_start(s, start);

    if (len <= count)
        res = (char *)malloc(len + 1);
    else
        res = (char *)malloc(count + 1);
    if (!res)
        return  (NULL);
    while((s[start]) && (i < len))
    {
        res[i] = s[start];
        i++;
        start++;
    }
    res[i] = '\0';
    return (res);
}
