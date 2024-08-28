#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstinilen;

	dstinilen = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	if (size <= ft_strlen(dst))
		return (ft_strlen(dst) + size);
	while (i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstinilen + ft_strlen(src));
}
