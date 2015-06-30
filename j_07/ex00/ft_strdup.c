#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int i;
	int len;
	char *out;

	i = 0;
	len = ft_strlen(src);
	out = malloc(sizeof((*src) * (len)));

	while (i <= len)
	{
		out[i] = src[i];
		i++;
	}
	return (out);
}

void	test(char *str)
{
	ft_putchar('\n');
	ft_putstr(str);
	ft_putchar('\0');
	ft_putstr(ft_strdup(str));
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
		return (0);
	while (argv[i]) 
		test(argv[i++]);
	return 0;
}
