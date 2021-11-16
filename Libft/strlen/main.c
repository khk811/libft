#include <stdio.h>
#include <string.h>

int	ft_strlen(char *s);

int	main()
{
	char *test1 = "asdf";

	printf("strlen result: %lu\n", strlen(test1));
	printf("ft_strlen result: %d\n", ft_strlen(test1));
	return (0);
}
