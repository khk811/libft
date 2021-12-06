#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*casted_s1;
	unsigned char	*casted_s2;

	i = 0;
	casted_s1 = (unsigned char *)s1;
	casted_s2 = (unsigned char *)s2;
	while ((casted_s1[i] || casted_s2[i]) && i < n)
	{
		if (casted_s1[i] != casted_s2[i])
			return (casted_s1[i] - casted_s2[i]);
		i++;
	}
	return (0);
}
