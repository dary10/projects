int		ft_str_is_alpha(char *str)
{
	int i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		i++;
	if (str[i] != '\0')
		return (0);
	else
		return (1);
}
