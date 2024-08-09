#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
    int k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
        k = i;
		j = 0;
		while (big[k] == little[j] && big[k] != '\0')
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
            k++;
		}
		i++;
	}
	return (NULL);
}
int main(int ac, char**av)
{
    //printf("funzione vera: %c\n", strnstr(av[1], av[2], 4));
    printf("funzione mia :%c\n", *ft_strnstr(av[1], av[2], 4));
}
