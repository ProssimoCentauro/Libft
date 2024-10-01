#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	int	i;
	int	j;
	char	*str;

	s1_len = ft_strlen(s1);
	i = 0;
	j = 0;
	str = (char *)malloc(s1_len + 1);
	if (!str)
		return (NULL);
	while (ft_strchr(set, s1[i]) && i < (int)s1_len)
		i++;
	while (ft_strchr(set, s1[s1_len]))
		s1_len--;
/*
	if (s1_len - i == s1_len)
		str = (char *)malloc(s1_len + 1);
	else if (s1_len - i == 0)
		return (NULL);
	else
		str = (char *)malloc((s1_len - i) + 2);
	if (!str)
		return (NULL);
*/
	while (i <= (int)s1_len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
