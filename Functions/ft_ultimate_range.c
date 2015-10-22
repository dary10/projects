#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *v;

	i = 0;
	v = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		v[i] = min;
		min++;
		i++;
	}
	*range = v;
	return (i);
}
