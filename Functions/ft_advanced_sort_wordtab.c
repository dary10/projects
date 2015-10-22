void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		ok;
	int		i;
	char	*s;

	ok = 0;
	while (!ok)
	{
		ok = 1;
		i = 1;
		while (tab[i] != 0)
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				s = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = s;
				ok = 0;
			}
			i++;
		}
	}
}
