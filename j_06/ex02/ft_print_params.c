void	ft_putchar(char c);
void	ft_putstr(char *str);

int main(int argc, char *argv[])
{
	int i;

	i = 1;

	if (argc == 1)
		return (0);
	while (argv[i])
	{
		ft_putstr(argv[i++]);
		ft_putchar('\0');
	}
	return (0);
}
