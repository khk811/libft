#include <stdio.h>

static int	ft_count_digit(int num)
{
	int	result;

	result = 0;
	if (num < 0)
	{
		num *= -1;
		result++;
	}
	while (num > 9)
	{
		num /= 10;
		result++;
	}
	result++;
	return (result);
}

/*
char *ft_itoa(int n)
{
	char	*result;


	return (result);
}*/

int	main()
{
	int	test = 10234;

	printf("ft_digitlen: %d\n", ft_count_digit(test));
	return (0);
}
