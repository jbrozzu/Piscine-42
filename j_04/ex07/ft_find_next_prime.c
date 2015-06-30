#include <unistd.h>

void	ft_putchar(char c)
{
	write (1 , &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = - nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;

	if (nb <= 1)
		return (2);
	while (i < nb)
	{
		if ((nb % i) == 0)
		{
			nb++;
			i = 2;
		}
		else
			i++;
	}
	return (nb);
}

void	test(int nb)
{
	int	 put;
	put = ft_find_next_prime(nb);

	ft_putnbr(put);
	ft_putchar('\n');
}

int main(int argc, const char *argv[])
{
	int i;
	i = 2;
	
	while (i != 150)
		test(i++);
	return 0;
}

