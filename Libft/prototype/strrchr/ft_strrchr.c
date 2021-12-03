#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(char *s, int c)
{
	s = s + ft_strlen(s) - 1;
	while (*s)
	{
		if (*s == c)
			return (s);
		s--;
	}
	return (NULL);
}

int	main()
{
	char	*str1 = "this is a sample text";
	char	*str2 = "";

	printf("strrchr result: %s\n", strrchr(str1, (int)'t'));
	printf("ft_strrchr result: %s\n", ft_strrchr(str1, (int)'t'));
	printf("-----\n");
	printf("strrchr result: %s\n", strrchr(str2, '\0'));
	printf("ft_strrchr result: %s\n", ft_strrchr(str2, '\0'));
	return (0);
}
