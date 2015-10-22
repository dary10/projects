int		ft_iterative_power(int nb, int power)
{
	int p;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	p = nb;
	while (power > 1)
	{
		nb = nb * p;
		power--;
	}
	return (nb);
}
