#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main()
{
	t_point point;

	set_point(&point);
	
	ft_putnbr(point.x);
	ft_putchar('\0');
	ft_putnbr(point.y);
	return 0;
}
