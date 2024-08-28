#include "libft.h"

static int	count_nums(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (10);
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	ft_power(int nb, int power)
{
	int	ininb;

	ininb = nb;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * ininb;
		power--;
	}
	return (nb);
}

static int	check_num(int n)
{
	if (n < 0)
		return (count_nums(n) + 2);
	else
		return (count_nums(n) + 1);
}

static char	*write_num(int n, int j, int i, char *str)
{
	int	n2;

	n2 = 0;
	while (n > 0)
	{
		n2 = n / j;
		str[i] = (n2 % 10) + '0';
		n = n - (j * (n2 % 10));
		j = j / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	str = (char *)malloc(check_num(n));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		if (n == -2147483648)
		{
			str[i] = '2';
			i++;
			n = 147483648;
		}
		else
			n = -n;
	}
	j = ft_power(10, count_nums(n) - 1);
	str = write_num(n, j, i, str);
	return (str);
}
