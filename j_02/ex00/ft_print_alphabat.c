#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet()
{
	int i;

	i = 'a';
	while (i != ('z' + 1)) 
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('z');
}

int main(int argc, const char *argv[])
{
	ft_print_alphabet();
	return 0;
}
