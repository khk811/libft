#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main()
{
	char	c = 120;
	// why??

	printf("isascii result: %d\n", isascii(c));
	printf("ft_isascii result: %d\n", ft_isascii(c));
	return (0);
}
