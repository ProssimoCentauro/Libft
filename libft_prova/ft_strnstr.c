#include "libft.h"
#include <stdio.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len - 1)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
#include <string.h>
int main(int ac, char**av)
{
    printf("%c\n", *ft_strnstr(av[1], av[2], 3));
    printf("%c\n", *strnstr(av[1], av[2], 3));
}
