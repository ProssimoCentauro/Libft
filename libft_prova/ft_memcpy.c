#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char    *dest_cast;
    const unsigned char    *src_cast;
    
    dest_cast = (unsigned char *) dest;
    src_cast = (unsigned char *) src;
    while(n--)
        dest_cast[n] = src_cast[n];
    return (dest);
}
/*
#include <stdio.h>
int main() {
    // Buffer di origine
    const char src[0];// = "Questa è una stringa di esempio per memcpy.";
    // Buffer di destinazione
    char dest[0];

    // Utilizzo della nostra funzione memcpy
    //ft_memcpy(dest, src, 60); // +1 per includere il terminatore null

    // Stampa del risultato
    //printf("Src:  %s\n", src);
    //printf("Dest: %s\n", dest);
    printf("%s\n", ft_memcpy(dest, src, 10));
    return 0;
}*/
