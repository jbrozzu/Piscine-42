#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = - nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(int argc, const char *argv[])
{
	int a;
	int b;
	int div;
	int mod;
	int *pdiv;
	int *pmod;

	a = 7;
	b = 3;
	div = 0;
	mod = 0;
	pdiv = &div;
	pmod = &mod;

	ft_div_mod(a, b, pdiv, pmod);
	ft_putnbr(div);
	ft_putchar('\0');
	ft_putnbr(mod);
	
	return 0;
}
