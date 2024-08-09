#include "libft.h"

void    ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char    *dest_cast;
    const unsigned char    *src_cast;
    size_t i;

    dest_cast = (unsigned char *) dest;
    src_cast = (unsigned char *) src;
    i = 0;
    while(i < n)
    {
        dest_cast[i] = src_cast[i];
        i++;
    }
    return (dest);
}
/*
#include <stdio.h>
int main() {
    // Buffer di origine
    const char src[50] = "Questa è una stringa di esempio per memcpy.";
    // Buffer di destinazione
    char dest[50];

    // Utilizzo della nostra funzione memcpy
    ft4_memcpy(dest, src, 4); // +1 per includere il terminatore null

    // Stampa del risultato
    printf("Src:  %s\n", src);
    printf("Dest: %s\n", dest);

    return 0;
}*/
