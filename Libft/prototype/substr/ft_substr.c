#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s[start], (len + 1));
	return (result);
}
