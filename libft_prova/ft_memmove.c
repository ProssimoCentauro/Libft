void    ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *dest_cast;
    //const unsigned char *src_cast;
    unsigned char   buffer[255];
    size_t  i;

    dest_cast = (unsigned char *) dest;
    //src_cast = (const unsigned char *) src;
    //buffer = (const unsigned char *) src;
    i = 0;
    while (src[i])
    {
        buffer[i] = (const unsigned char *)src;
        i++;
    }
    i = 0
    while (i < n)
    {
        dest[i] = buffer[i];
        i++;
    }
    return (dest);
}
