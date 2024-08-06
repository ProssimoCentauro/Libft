#include "libft.h"

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    char    *restrict dest_cast;
    const char    *restrict src_cast;
    size_t i;
    dest_cast = (char *restrict) dest;
    src_cast = (char *restrict) src;
    i = 0;
    while(i++ < n)
        dest_cast[i] = src_cast[i];
    return (dest);
}
#include <stdio.h>
int main() {
    // Buffer di origine
    const char src[50] = "Questa è una stringa di esempio per memcpy.";
    // Buffer di destinazione
    char dest[50];

    // Utilizzo della nostra funzione memcpy
    ft_memcpy(dest, src, ft_strlen(src) + 1); // +1 per includere il terminatore null

    // Stampa del risultato
    printf("Src:  %s\n", src);
    printf("Dest: %s\n", dest);

    return 0;
}
