#include <stdlib.h>

static int	ft_count_digits(int n)
{
	int	result;

	result = 0;
	if (n < 0)
	{
		n *= -1;
		result++;
	}
	while (n > 9)
	{
		n /= 10;
		result++;
	}
	result++;
	return (result);
}

static int	ft_make_divider(int n)
{
	int	i;
	int	result;

	result	= 1;
	i = ft_count_digits(n);
	if (n < 0)
		i--;
	while (--i > 0)
		result *= 10;
	return (result);
}

char *ft_itoa(int n)
{
	char	*result;
	 int	the_divider;
	 int	i;
	
	i = 0;
	the_divider = ft_make_divider(n);
	result = (char *)malloc(sizeof(char) * (ft_count_digits(n) + 1));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[i++] = '-';
		n *= -1;
	}
	while (the_divider > 0)
	{
		result[i++] = (n / the_divider) + '0';
		n %= the_divider;
		the_divider /= 10;
	}
	result[i] = '\0';
	return (result);
}
