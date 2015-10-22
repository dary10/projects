void	ft_ultimate_div_mod(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = i / j;
	*b = i % j;
}
