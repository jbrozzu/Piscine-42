#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_put_t_nbr(int *t_nb, int len);
int		ft_atoi(char *str);

int		*ft_range(int min, int max)
{
	int i;
	int j;
	int len;
	int *out;

	i = 0;
	j = max;
	len = max - min;

	if (len <= 0)
		return (NULL);

	out = malloc(sizeof(out) * (len));
	if (out)
	{
		while (i != len)
		{
			out[i] = j;
			i++;
			j++;
		}
	return (out);
	}
	else
		return (NULL);
}

void	test(char *t_min, char *t_max)
{
	int min;
	int max;
	int len;
	int *tab;

	min = ft_atoi(t_min);
	max = ft_atoi(t_max);
	len = max - min;
	tab = ft_range(min, max);

	if (len > 0  && *tab)
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
