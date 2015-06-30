#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
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
	{
		ft_putchar(nb + '0');
	}
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a / *b;

	*b = *a % *b;

	*a = tmp;
}

int main(int argc, const char *argv[])
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 7;
	b = 3;
	pa = &a;
	pb = &b;

	ft_ultimate_div_mod(pa, pb);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	return 0;
}
