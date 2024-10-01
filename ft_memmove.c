#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cast;
	unsigned char	*src_cast;

	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned char *)src;
	if (!dest_cast && !src_cast)
		return (NULL);
	if (dest > src)
	{
		dest_cast += n - 1;
		src_cast += n -1;
		while (n--)
			*dest_cast-- = *src_cast--;
	}
	else
	{
		while (n--)
			*dest_cast++ = *src_cast++;
	}
	return (dest);
}
