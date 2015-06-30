void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_swap_p(char *p1, char *p2)
{
	char *tmp;

	tmp = p1;
	p1 = p2;
	p2 = tmp;
}

void	tri_a_bule(int ac, char **av)
{
	int i;

	i = 1;

	while (i != (ac - 1))
	{
		if (av[i][1] > av[i + 1][1] && i + 1 <= ac)
		{
			ft_swap_p(av[i], av[i + 1]);
			i = 1;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
		return (0);

	tri_a_bule(argc, argv);
	while (argv[i])
	{
		ft_putstr(argv[i++]);
	}
	return 0;
}
