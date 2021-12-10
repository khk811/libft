#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	return_value;

	return_value = ft_strlen(src);
	if (!dstsize)
		return (return_value);
	while (*src && --dstsize)
		*dst++ = *src++;
	if (dstsize >= 0)
		*dst = '\0';
	return (return_value);
}
