#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- > 0)
	{
        i = 0;
		while (haystack[i] == needle[i] && i < len)
		{
		    i++;
			if (!needle[i])
				return ((char *)haystack);
		}
        haystack++;
	}
	return (0);
}
