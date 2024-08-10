#include <stdlib.h>

unsigned char ft_toupper(unsigned char c);
unsigned char ft_tolower(unsigned char c);
char    *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
size_t  ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
size_t ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
void    *ft_memset(void *s, int c, size_t n);
void    *ft_memchr(const void *s, int c, unsigned int n);
int ft_isprint(unsigned char c);
int ft_isdigit(unsigned char c);
int ft_isascii(unsigned char c);
int ft_isalpha(unsigned char c);
int ft_isalnum(unsigned char c);
void ft_bzero(void *s, size_t n)
{
    char    *buffer;

    buffer = (char *)s;
    while (n--)
        buffer[n] = 0;
}
int ft_atoi(const char *nptr);
