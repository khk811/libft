#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

    if (!s1)
        return ((char *)s2);
    if (!s2)
        return ((char *)s1);
	result = (char *)malloc(sizeof(char) * (int)(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(result, (char *)s2, ft_strlen(s2) + ft_strlen(result) + 1);
	return (result);
}
