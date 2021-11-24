#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int	src_len;
	int	i;

	i = 0;
	src_len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * (src_len + 1));
	if (result == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}
