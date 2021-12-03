char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int	j;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (i <= len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j])
			{
				if (!needle[j + 1])
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
