#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	casted_c;
	unsigned char	*casted_s;
	size_t	i;

	casted_c = (unsigned char)c;
	casted_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*casted_s == casted_c)
			return ((void *)casted_s);
		i++;
		casted_s++;
	}
	return (NULL);
}
