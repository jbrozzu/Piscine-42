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

int	ft_recursive_power(int nb, int power)
{
	if (power <= 0)
		return (0);
	while (power != 1)
		return (nb * ft_recursive_power(nb , power - 1));
}

void	test(int nb, int power)
{
	int resulta;

	resulta = ft_recursive_power(nb, power);
	ft_putnbr(resulta);
ft_putchar('\n');
}
int main(int argc, const char *argv[])
{
	test(5, 3);
	test(-5, 3);
	test(5, -3);
	test(5, 0);
	test(0, 5);
	test(0, 0);
	return 0;
}

