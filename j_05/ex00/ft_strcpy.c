#include <unistd.h>
#include <string.h>
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
	i+= 2;
	while (str[i])
		ft_putchar(str[i++]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = src[i];
	return (dest);
}

int main(int argc, const char *argv[])
{
	char str[15] = {'d', 'e', 'b', 'u', 't', '\0'};
	char add[] = {'\n', 'f', 'i', 'n','\0'};

	ft_putstr(ft_strcpy(str, add));
	ft_putchar('\n');
	ft_putstr(strcpy(str, add));
	return 0;
}
