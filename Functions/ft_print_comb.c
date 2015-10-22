void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int a[3];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '9' && a[1] != a[0])
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9' && a[2] != a[0] && a[2] != a[1])
			{
				ft_putchar(a[0]);
				ft_putchar(a[1]);
				ft_putchar(a[2]);
				if (a[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
