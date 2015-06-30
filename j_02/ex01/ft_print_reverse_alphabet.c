#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet()
{
	int i;

	i = 'z';

	while (i != ('a' - 1))
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('a');
}

int main(int argc, const char *argv[])
{
	ft_print_reverse_alphabet();
	return 0;
}
