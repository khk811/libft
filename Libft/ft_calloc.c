#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = (void *)malloc(count * size);
	if (!result)
		return (NULL);
	ft_memset(result, 0, (count * size));
	return (result);
}
