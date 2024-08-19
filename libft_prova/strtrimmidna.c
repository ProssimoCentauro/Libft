//#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	s1len;
	int		i;
	int		k;
	int		j;

	i = 0;
	k = 0;
	j = 0;
	s1len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (s1len + 1));
	if (!copy)
		return (NULL);
	while (ft_strchr(set, s1[i]))
		i++;
	j = i;
	while (s1[i])
		i++;
	while (ft_strchr(set, s1[i]))
		i--;
	while (j <= i)
		copy[k++] = s1[j++];
	copy[k] = '\0';
	return (copy);
}
#include <stdio.h>
int main(int ac, char**av)
{
    (void)ac;
    printf("%s\n", ft_strtrim(av[1], av[2]));
    return 0;
}
