#include "../include/libft.h"

static void	ft_putnbr_rec(int nb, int fd)
{
	int	n;

	if (nb > 9)
	{
		n = (nb % 10) + '0';
		ft_putnbr_rec(nb / 10, fd);
	}
	else
		n = nb + '0';
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n < -2147483647)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		else
		{
			n *= -1;
			write(fd, "-", 1);
		}
	}
	ft_putnbr_rec(n, fd);
}
