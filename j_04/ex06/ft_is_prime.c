#include <unistd.h>

void	ft_putchar(char c)
{
	write (1 , &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = - nb	;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	test(int nb)
{
	int put;

	put = ft_is_prime(nb);
	if (put)
	{
		ft_putnbr(nb);
		ft_putchar('\n');
	}
}

int		main(int argc, const char *argv[])
{
	int i;
	i = -1;
	while (1)
	{
		test(i++);
	}
	return 0;
}

