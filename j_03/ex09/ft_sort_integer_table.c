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
		ft_putchar(nb + '0');
}

void	ft_put_tab_nbr(int *tab, int size)
{
	int i;

	i = 0;

	while (i != size + 1)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 0;

	while (i != size)
	{
		if (tab[i] > tab[i + 1] && i + 1 <= size)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

void	affich_tab(int *tab, int size)
{
	ft_put_tab_nbr(tab, size);
	ft_sort_integer_table(tab, size);
	ft_put_tab_nbr(tab, size);
}
int main(int argc, const char *argv[])
{
	int tab[] = {5, 4, 3, 2, 1, 0};
	int tab2[] = {256, 156, 1654, 215, 15681, 145, 51845, 15};
	int size;
	int size2;
	size = 5;
	size2 = 7;

	affich_tab(tab, size);
	affich_tab(tab2, size2);
	return 0;
}
