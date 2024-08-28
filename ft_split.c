#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	size_t	i;
	size_t	count;
	size_t	inword;

	i = 0;
	count = 0;
	inword = 0;
	while (str[i])
	{
		while (str[i] != c && str[i] != '\0')
		{
			inword = 1;
			i++;
		}
		if (inword == 1)
			count++;
		while (str[i] == c)
		{
			inword = 0;
			i++;
		}
	}
	return (count);
}

static size_t	calc_word_len(char const *s, char c, size_t index)
{
	size_t	count;

	count = 0;
	while (s[index] != c && s[index])
	{
		count++;
		index++;
	}
	return (count);
}

static char	*ft_strncpy(char *dest, char const *src, size_t index, size_t n)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = index - n;
	while (start < index && src[start])
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*set_0(char *str)
{
	str = (char *)malloc(1);
	str = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	mat_i;
	size_t	word_len;
	char	**matrix;

	i = 0;
	mat_i = 0;
	matrix = (char **)malloc((sizeof(char *) * count_words(s, c)) + 1);
	if (!matrix)
		return (NULL);
	while (i < ft_strlen(s))
	{
		word_len = calc_word_len(s, c, i);
		i = i + word_len + 1;
		matrix[mat_i] = (char *)malloc(word_len + 1);
		if (!matrix[mat_i])
			return (NULL);
		matrix[mat_i] = ft_strncpy(matrix[mat_i], s, i - 1, word_len);
		mat_i++;
	}
	matrix[mat_i] = set_0(matrix[mat_i]);
	return (matrix);
}
