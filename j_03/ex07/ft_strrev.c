#include <unistd.h>

void	ft_putchar(char c)
{
	write (1 , &c, 1);
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

int		ft_strlen(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;

	while (str[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;
	
	i = 0;
	len = ft_strlen(str);
	
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - i];
		str[len - i - 1] = tmp;
		i++;
	}
	return (str);
}

int main(int argc, const char *argv[])
{
	char str[] = {'a', 'b', 'c', 'd', '\n' , '\0'};
	ft_putstr(str);
	ft_strrev(str);
	ft_putstr(str);
	return 0;
}
