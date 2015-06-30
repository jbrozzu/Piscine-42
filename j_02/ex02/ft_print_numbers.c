#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers()
{
	int i;

	i = '0';

	while (i != ('9' + 1))
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('10');
}

int main(int argc, const char *argv[])
{
	ft_print_numbers();
	return 0;
}
