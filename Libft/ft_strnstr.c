#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (i <= len)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
