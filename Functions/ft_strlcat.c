int					ft_strlen(char *s)
{
	int nr;

	nr = 0;
	while (s[nr] != '\0')
		nr++;
	return (nr);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int n;

	n = ft_strlen(dest);
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < size - n - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return ((ft_strlen(src) + n) - 1);
}
