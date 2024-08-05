//#include <stdio.h>
//#include <string.h>

const void    *ft_memchr(const void *s, int c, unsigned int n)
{
    const char  *buffer = (const char *)s;
    unsigned char   ch = (unsigned char)c;
    int i;
    
    i = 0;
    while (i < n - 1)
    {
        if (buffer[i] == ch)
            return (&buffer[i]);
        i++;
    }
    return (NULL);
}
int main(int argc, char **argv)
{
    //printf ("%s\n", memchr(argv[1], ));
  //  printf ("%s\n", ft_memchr(argv[1], 'i', 5));
    return 0;
}
