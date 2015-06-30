#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	init_tab(char *tab, int len)
{
	int i;

	i = 0;
	while (i != len)
	{
		tab[i] = '0';
		i++;
	}
	tab[len] = '\n';
}

int		incr(char *str, int len)
{
	int i;
	int j;

	i = len - 1;
	j = len - 1;
	if (str[i] == '9')
	{
		while (i >= 0 && str[i] == '9')
		{
			i--;
		}
		if (i >= 0)
		{
			while (j != i && str[j] == '9') 
			{
				str[j] = '0';
				j--;
			}
			str[i]++;
			return (1);
		}
		return (0);
	}
	else
		str[i]++;
	return (1);
}

int		good(char *str, int len)
{
	int i;
	int n;
	int var_de_test;
	
	var_de_test = 0;
	n = 1;
	i = 0;

	while (1) 
	{
		if (str[i] >= str[i + n] && (i + n) < len)
		{
			return (0);
		}
		else if ((i + n + 1) <= (len - 1))
		{
			n++;
		}
		else if ((i + n) == (len - 1) && i != (len - 1))
		{
			i++;
			n = 1;
		}
		else if (i == (len - 1))
		{
			return (1);
		}
	}
}
void	ft_print_combn(int len)
{
	char str[len];
	int i;
	int j;

	j = 0;
	i = 1;
	init_tab(str, len);

	while (i)
	{
		i = incr(str, len);
		if (good(str, len))
		{
			ft_putstr(str);
			if (i)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			else
				ft_putchar('\n');
		}
	}
}

int main(int argc, const char *argv[])
{
	int len;

	len = 5;

	ft_print_combn(len);
	return 0;
}
