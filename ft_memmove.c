#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cast;
	unsigned char	*src_cast;

	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned char *)src;
	if (dest > src)
		*dest_cast++ = *src_cast++;
	else
		dest_cast[n] = src_cast[n];
	return (dest);
}
