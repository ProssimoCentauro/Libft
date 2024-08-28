#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*buffer;

	buffer = (char *)s;
	while (n--)
		buffer[n] = 0;
}
