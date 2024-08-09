#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    if (!size)
        return (ft_strlen(src));
    dst[size + 1] = '\0';
    while (size--)
        dst[size] = src[size];
    return (ft_strlen(dst));
}
#include <string.h>
#include <stdio.h>
int main() {
    char src[] = "Hello, World!";
    char dst[20];
    size_t dstsize = 0;//sizeof(dst);
    
    // Use strlcpy to copy src to dst
    size_t copied = ft_strlcpy(dst, src, dstsize);
    
    // Print results
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);
    printf("Number of characters copied (excluding NUL): %zu\n", copied);
    
    return 0;
}
