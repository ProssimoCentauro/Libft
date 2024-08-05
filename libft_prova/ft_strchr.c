const char    *ft_strchr(const char *s, const char c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    return (&s[i]);
}
