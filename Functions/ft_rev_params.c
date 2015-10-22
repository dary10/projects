#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	while (i != 1)
	{
		i--;
		ft_putstr(argv[i]);
	}
	return (0);
}
