#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *v;

	i = 0;
	if (min > max)
		return (0);
	v = (int *)malloc(sizeof(*v) * (max - min));
	while (min < max)
	{
		v[i] = min;
		i++;
		min++;
	}
	return (v);
}
