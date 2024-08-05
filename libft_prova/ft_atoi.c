#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int num;

    i = 0;
    sign = 1;
    num = 0;
    while ((nptr[i] == ' ') || (nptr[i] == '\t'))
        i++;
    while ((nptr[i] == '+') || (nptr[i] == '-'))
    {
        if (nptr[i] == '-')
            sign = -sign;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        num = (num * 10) + (nptr[i] - '0');
        i++;
    }
    return (num);
}
