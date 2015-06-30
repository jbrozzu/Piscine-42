#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 1;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i])
	{
		i++;
		j++;
	}
	return (j);
}

int main(int argc, const char *argv[])
{
	char str[] = {'1', '2', '3', '4', '5', '\n', '\0'};
	int i;

	i = 0;
	ft_putstr(str);
	i = ft_strlen(str);
	ft_putchar(i + '0');
	return 0;
}
