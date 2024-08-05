const char    *ft_strrchr(const char *s, const char c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    while (i != -1)
    {
        if (s[i] == c)
            return (&s[i]);
        i--;
    }
    return (&s[i]);
}
