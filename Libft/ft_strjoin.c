#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (*src && --dstsize)
		*dst++ = *src++;
	if (dstsize > 0)
		*dst = '\0';
	return (ft_strlen(src));
}

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

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * (int)(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(result, (char *)s2, ft_strlen(s2) + ft_strlen(result) + 1);
	return (result);
}

int	main()
{
	char	*the_sauce = "sriracha";
	char	*the_love = ", with love.";

	printf("the result: %s\n", ft_strjoin(the_sauce, the_love));
	return (0);
}
