int		ft_str_is_lowercase(char *str)
{
	int i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
