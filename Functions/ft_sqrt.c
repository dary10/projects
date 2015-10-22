int		ft_sqrt(int nb)
{
	int i;

	if (nb == 0)
		return (0);
	else
	{
		i = 1;
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			else
				i++;
		}
	}
	return (0);
}
