#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
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

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(int argc, const char *argv[])
{
	int n;
	int nbr8;
	int *nbr7;
	int **nbr6;
	int ***nbr5;
	int ****nbr4;
	int *****nbr3;
	int ******nbr2;
	int *******nbr1;
	int ********nbr;

	n = 21;
	
	nbr8 = &n;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	
	ft_putnbr(n);
	ft_putchar('\0');

	ft_ultimate_ft(nbr);
	ft_putnbr(n);
	
	return 0;
}
