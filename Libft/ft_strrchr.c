#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	if (!c)
	{
		while (*s)
			s++;
		return (s);
	}
	while (*s)
	{
		if (*s == c)
			result = s;
		s++;
	}
	return (result);
}
