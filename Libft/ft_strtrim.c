#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len;
	char *result;

	if (!set)
		return (ft_strdup((char *)s1));
	i = 0;
	len = 0;
	while (set[i])
	{
		if (!ft_strchr(s1, set[i]))
			len++;
		i++;
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] != set[j])
			{
				*result++ = s1[i];
			}
			j++;
		}
		i++;
	}
	result++;
	*result = '\0';
	return (result);
}
