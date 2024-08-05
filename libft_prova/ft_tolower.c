unsigned char ft_tolower(unsigned char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}
