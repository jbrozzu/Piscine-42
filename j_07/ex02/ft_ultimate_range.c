#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_put_t_nbr(int *t_nb, int len);
int		ft_atoi(char *str);

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int len;

	i = 0;
	j = min;
	len = max - min;

	if (len <= 0)
	{
		range = NULL;
		return (1);
	}

	range = malloc(sizeof(range) * (len));
	if (range)
	{
		while (i != len)
		{
			range[i] = j;
			i++;
			j++;
		}
	return (len);
	}
	else
		return (0);
}

void	test(char *t_min, char *t_max)
{
	int min;
	int max;
	int len;
	int **tab;

	min = ft_atoi(t_min);
	max = ft_atoi(t_max);
	len = ft_ultimate_range(tab, min, max);

	if (len)
		ft_put_t_nbr(tab, len);
}

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		return (0);

	test(argv[1], argv[2]);
	return 0;
}
