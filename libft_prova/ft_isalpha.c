#include "libft.h"

int ft_isalpha(unsigned char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}
