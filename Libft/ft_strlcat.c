#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dest_size)
{
	int	src_len_to_add;
	int	idx_dest;
	int	idx_src;
	int	normal_return;

	src_len_to_add = (int)(dest_size - ft_strlen(dest)) - 1;
	idx_dest = ft_strlen(dest);
	idx_src = 0;
	normal_return = (int)(ft_strlen(dest) + ft_strlen(src));
	if (src_len_to_add <= 0)
		return (ft_strlen(src) + dest_size);
	while (src[idx_src] != '\0' && src_len_to_add > 0)
	{
		dest[idx_dest++] = src[idx_src++];
		src_len_to_add--;
	}
	dest[idx_dest] = '\0';
	return (normal_return);
}
