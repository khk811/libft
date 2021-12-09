#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!c)
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
