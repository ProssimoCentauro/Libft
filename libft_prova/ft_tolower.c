unsigned char ft_toupper(unsigned char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}
