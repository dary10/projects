int		ft_is_prime(int nb)
{
	int i;
	int j;

	if (nb == 0)
		return (0);
	else
	{
		if (nb == 1)
			return (0);
		else
		{
			i = 1;
			j = 0;
			while (i <= nb)
			{
				if (nb % i == 0)
					j++;
				i++;
			}
			if (j == 2)
				return (1);
		}
	}
	return (0);
}
