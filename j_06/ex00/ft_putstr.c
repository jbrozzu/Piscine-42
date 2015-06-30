void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 1;

	while (str[i])
		ft_putchar(str[i++]);
}
