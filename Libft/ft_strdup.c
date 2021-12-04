#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *s1)
{
	 int	i;
	char	*result;

	i = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
