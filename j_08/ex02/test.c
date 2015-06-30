#include "ft_abs.h"

void	ft_putnbr(int);
void	ft_putchar(char);

int main()
{
	int i;
	i = -2;

	while (i != 3)
	{
		ft_putnbr(ABS(i));
		ft_putchar('\n');
		i++;
	}
	return 0;
}
