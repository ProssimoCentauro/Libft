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

static size_t	word_len(char const *s, size_t index, char c)
{
	size_t	count;

	count = 0;
	while(s[index] != c)
	{
		count++;
		index++;
	}
	return (count);
}

static void	string_copy(char *dst, char const *src, size_t i, char c)
{
	size_t j;

	j = 0;
	while(src[i] != c)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;

	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	j = 0;
	while(s[i] == c && s[i])
		i++;
	while (s[i])
	{
		matrix[j] = (char *)malloc(word_len(s, i, c) + 1);
		if (!matrix[j])
			return (NULL);
		string_copy(matrix[j], s, i, c);
		j++;
		while(s[i] != c && s[i])
			i++;
		while(s[i] == c && s[i])
			i++;
	}
	matrix[j] = 0;
	return (matrix);
}








/*
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

size_t	i_for_strncpy(char const  *s, char c, size_t i)
{
	while(s[i] == c)
		i--;
	return(i + 1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	mat_i;
	size_t	word_len;
	char	**matrix;

	i = 0;
	mat_i = 0;
	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	while (i < ft_strlen(s))
	{
		ciaokbella;
		word_len = calc_word_len(s, c, i);
		i = i + word_len;
		while (s[i] == 'c' && s[i] != '\0')
			i++;
		matrix[mat_i] = (char *)malloc(word_len + 1);
		if (!matrix[mat_i])
			return (NULL);
		matrix[mat_i] = ft_strncpy(matrix[mat_i], s, i_for_strncpy(s, c, i - 1), word_len);
		mat_i++;
	}
	matrix[mat_i] = 0;
	return (matrix);
}*/
/*
void	ft_strncpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;
	char	*str;

	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	i = 0;
	j = 0;
	str = (char *)s;
	while(s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
		}
		matrix[j] = (char *)malloc(i + 1);
		ft_strncpy(matrix[j], s, i);
		i = 0;
		j++;
		if (*s != '\0')
			s++;
	}
	matrix[j] = 0;
	return (matrix);
}
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	int	i = 0;
	char **mat;
	mat = ft_split(av[1], 'k');
	while (i < 3)
	{
		printf("%s\n", mat[i]);
		i++;
	}
	return (0);
}*/
