#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_strcpy_n(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
}
int		strlen_argv(int argc, char **argv)
{
	int i;
	int j;
	int len;

	i = 1;
	len = 0;
	
	while (i != argc)
	{
		while (argv[i][j++]);
		len += j;
		j = 0;
		i++;
	}
	return (len);
}
char	*ft_concat_params(int argc, char **argv)
{
	char *out;
	int i;
	int j;
	int k;
	int len;

	i = 1;
	j = 1;
	k = 0;
	
	len = strlen_argv(argc, argv);
	out = malloc(sizeof(out) * (len));

	if (out)
	{
		while (i != argc)
		{
			while (argv[i][j])
			{
				out[k] = argv[i][j];
				k++;
				j++;
			}
			out[k++] = '\0';
			j = 0;
			i++;
		}
		return (out);
	}
	else
		return (NULL);
}

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		return (0);

	ft_putstr(ft_concat_params(argc, argv));
	return 0;
}
