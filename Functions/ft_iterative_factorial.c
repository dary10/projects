int		ft_iterative_factorial(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	else
	{
		if (nb == 0)
			return (1);
		else
		{
			i = 1;
			while (nb >= 1)
			{
				i *= nb;
				nb--;
			}
		}
	}
	return (i);
}
