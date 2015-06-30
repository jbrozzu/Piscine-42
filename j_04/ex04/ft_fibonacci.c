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

int		ft_fibonacci(int index)
{
	if (index < 2 && index >= 0)
		return (index);
	else if (index >= 2)
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	else
		return (-1);
}
void	test(int index)
{
	int put;

	put = ft_fibonacci(index);
	ft_putnbr(put);
	ft_putchar('\n');
}

int main(int argc, const char *argv[])
{
	int i;

	i = -1;

	while (i != 10)
	{
		test(i++);
	}
	return 0;
}
