#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		//ft_putchar? or write??
		write(1, "-2147483648", 11);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n / 10 == 0)
	{
		c = n + '0';
		ft_putchar_fd(c, fd);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
}
