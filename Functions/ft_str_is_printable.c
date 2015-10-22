int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] > 31)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
