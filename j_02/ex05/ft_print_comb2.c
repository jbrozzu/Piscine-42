#include <unistd.h>

void	ft_putchar(char c)
{
	write (1 , &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('0');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 49);
}

void	ft_putall(int nb1, int nb2)
{
	ft_putchar(' ');
	if (nb1 < 10)
		ft_putchar('0');
	ft_putnbr(nb1);
	ft_putchar(' ');
	if (nb2 < 10)
		ft_putchar('0');
	ft_putnbr(nb2);
	ft_putchar(',');
}

void	ft_print_comb2()
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i != 99)
	{
		while (j != 100)
		{
			ft_putall(i , j);
			j++;
		}
		i++;
		j = i + 1;
	}
}

int main(int argc, const char *argv[])
{
	ft_print_comb2();
	return 0;
}
