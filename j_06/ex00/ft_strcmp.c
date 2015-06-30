int		ft_strlen(char *str);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);

	if (i < j)
		return (1);
	if (i == j)
		return (0);
	return (1);
}
