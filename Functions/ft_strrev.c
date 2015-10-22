int		count(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int aux;

	i = 0;
	j = count(str) - 1;
	while (i <= j)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		i++;
		j--;
	}
	return (str);
}
