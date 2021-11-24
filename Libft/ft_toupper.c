int	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return ((int)c);
}
