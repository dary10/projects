int		prim(long n)
{
	long i;

	if (n < 0)
		n = n * -1;
	if (n == 1 || n == 0)
		return (0);
	i = 2;
	while (i <= n / 2)
		if (n % i == 0)
			return (0);
		else
			i++;
	return (1);
}

int		ft_find_next_prime(int nb)
{
	long n;

	if (nb <= 1)
		return (2);
	n = nb;
	while (1 != 0)
		if (prim(n) == 1)
			return (n);
		else
			n++;
}
