#include <string.h>

unsigned char ft_toupper(unsigned char c);
unsigned char ft_tolower(unsigned char c);
const char    *ft_strrchr(const char *s, const char c);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
size_t  ft_strlen(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t size);
const char    *ft_strchr(const char *s, const char c);
void    *ft_memset(void *s, int c, size_t n);
void    *ft_memchr(const void *s, int c, unsigned int n);
int ft_isprint(unsigned char c);
int ft_isdigit(unsigned char c);
int ft_isascii(unsigned char c);
int ft_isalpha(unsigned char c);
int ft_isalnum(unsigned char c);
void ft_bzero(void *s, size_t n);
int ft_atoi(const char *nptr);
