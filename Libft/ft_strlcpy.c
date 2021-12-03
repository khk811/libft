#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0
	while (*src && --dstsize)
		*dst++ = *src++;
	if (dstsize > 0)
		*dst = '\0';
	return (ft_strlen(src));
}
