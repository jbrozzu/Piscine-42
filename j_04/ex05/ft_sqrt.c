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

int		ft_sqrt(int nb)
{
	int i;

	i = 1;

	while (i <= nb / 2)
	{
		if ((i * i) == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

void	test(int nb)
{
	int resultat;

	resultat = ft_sqrt(nb);
	ft_putnbr(resultat);
	ft_putchar('\n');
}

int main(int argc, const char *argv[])
{
	test(-1);
	test(0);
	test(4);
	test(5);
	test(9);
	test(16);
	test(14400); // = 120
	return 0;
}

