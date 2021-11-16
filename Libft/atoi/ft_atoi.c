#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	count_minus;
	int	result;

	i = 0;
	count_minus = 1;
	result = 0;

	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		count_minus = -1;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= count_minus;
	return (result);
}

int	main()
{
	char	*str;

	str = " 0123";
	printf("ft_atoi result: %d\n", ft_atoi(str));
	return (0);
}
