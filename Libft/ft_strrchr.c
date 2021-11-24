#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (str[len - i - 1] != 0)
	{
		if (str[len - i - 1] == c)
		{
			return (&str[len - i - 1]);
		}
		i++;
	}
	return (&str[len - i - 1]);
}
