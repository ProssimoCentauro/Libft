#include "libft.h"

static size_t	index_calc(char const *s1, char const *set)
{
	size_t	k;
	size_t	i;

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
				break ;
			}
			k++;
		}
		if (k == ft_strlen(set))
			break ;
	}
	return (i);
}

static size_t	index_calc_rev(char const *s1, char const *set, size_t i)
{
	size_t	k;
	size_t	j;

	k = 0;
	j = ft_strlen(s1) - 1;
	while (1)
	{
		k = 0;
		while (set[k])
		{
			if (s1[j] == set[k])
			{
				if (j == i)
					return (j);
				j--;
				break ;
			}
			k++;
		}
		if (k == ft_strlen(set))
			break ;
	}
	return (j);
}

static char	*malloc_string(char *str, size_t j, size_t i)
{
	if (j - i == 0)
	{
		str = (char *)malloc(1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	else
	{
		str = (char *)malloc(((j - i) + 1) + sizeof(char));
		str[0] = 'a';
	}
	return (str);
}

static int	check_string(char *str)
{
	if (str[0] == '\0')
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	i = index_calc(s1, set);
	j = index_calc_rev(s1, set, i);
	k = 0;
	dest = malloc_string(dest, j, i);
	if (!dest)
		return (NULL);
	if (!check_string(dest))
		return (dest);
	while (i <= j)
	{
		dest[k] = s1[i];
		k++;
		i++;
	}
	return (dest);
}
