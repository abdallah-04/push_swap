
#include "push_swap.h"

void	ft_putnbr_nospace(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_nospace(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	print_error()
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

void	ft_putnbr(int n)
{
	ft_putnbr_nospace(n);
	write(1, " ", 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
