#include <stdio.h>
#include <string.h>

// https://st-lab.tistory.com/198

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	casted_c;
	size_t i;

	casted_c = (unsigned char)c;
	while (i < len)
		dest[i++] = casted_c;
	return (dest);
}

int	main()
{
	int	memset_Ptr[10];
	int	ft_memset_Ptr[10];

	memset(memset_Ptr, 0, 10 * sizeof(int));
	ft_memset(ft_memset_Ptr, 0, 10 *sizeof(int));
	for (int i; i < 10; i++)
	{
		printf("memset: %d ", memset_Ptr[i]);
		printf("ft_memset: %d\n", ft_memset_Ptr[i]);
	}
	return (0);
}
