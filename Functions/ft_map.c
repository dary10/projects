#include <unistd.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *a;

	i = 0;
	a = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		a[i] = f(tab[i]);
		i++;
	}
	return (a);
}
