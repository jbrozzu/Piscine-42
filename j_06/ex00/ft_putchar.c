#include <unistd.h>

void	ft_putchar(char c)
{
	write (2, &c, 1);
}
