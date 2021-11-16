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

	i = 0;
	while (str[i] != '\0')
	{
		printf("%d\n", ft_isspace(str[i]));
		i++;
	}
	return (0);
}

int	main()
{
	char	*str;

	str = "  0123";
	ft_atoi(str);
	return (0);
}
