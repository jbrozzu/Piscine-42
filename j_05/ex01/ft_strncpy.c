#include <unistd.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while (src[i] && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 1;

	while (str[i])
		ft_putchar(str[i++]);
}

void	test(char *dest, char *src, unsigned int n)
{
	ft_putstr(ft_strncpy(dest, src, n));
	ft_putchar('\0');
	ft_putstr(strncpy(dest, src, n));
}

int main(int argc, const char *argv[])
{
	char dest[20] = {'u', 'n', ' ', 't', 'e', 's', 't', 'e'};
	char src[] = {'v', 'o', 'i', 'l', 'a', ' ','f', 'i', 'n', '\0'};

	test(dest, src, 10);
	return 0;
}
