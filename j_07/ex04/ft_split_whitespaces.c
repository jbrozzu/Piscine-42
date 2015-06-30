#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
}

int		ft_dim_all(char *str)
{
	int i;
	int out;

	i = 0;
	out = 0;

	while (str[i])
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\t' ) 
		{
			out++;
		}
		i++;
	}
	return (out);
}

int		ft_len_2d(char *str, int index)
{
	int out;

	out = 0;

	while (str[index] != ' ' || str[index] != '\n' || str[index] != '\t' || str[index] != '\0')
		{
		index++;
		out++;
		}
	return (out);
	
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	int index;
	int len_1d;
	int len_2d;
	char **out;

	i = 0;
	index = 0;
	len_1d = ft_dim_all(str) + 1; // +1 pour \0
	out = malloc(sizeof(*out) * len_1d);

	if (out == NULL)
		return (0);

	while (str[index])
	{
		len_2d = ft_len_2d(str, index);
		out[i] = malloc(sizeof(*(out[i])) * len_2d);
		if (out[i] == NULL)
			return (0);
		ft_strncpy(out[i], str[index], len_2d);
		out[i][index] = '\0';
		index += len_2d;
		i++;
	}
	out[++i] = 0;
	return (out);
}



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
	j = 0;
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
			out[k++] = '\n';
			j = 0;
			i++;
		}
		return (out);
	}
	else
		return (NULL);
}

void	test(char *str, int len)
{
	char **tab;

	tab = ft_split_whitespaces(str);
	ft_putstr(ft_concat_params(len, tab));
}

int main(int argc, const char *argv[])
{
	test("chaine de test de 6 mot", 6);
	return 0;
}
