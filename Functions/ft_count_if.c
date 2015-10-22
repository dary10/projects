int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			k++;
		i++;
	}
	return (k);
}
