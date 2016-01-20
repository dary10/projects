/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:53:41 by dsalca            #+#    #+#             */
/*   Updated: 2016/01/12 14:11:31 by dsalca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	c2;
	int				i;

	i = 0;
	c2 = (unsigned char)c;
	p = (unsigned char *)s;
	while (n--)
	{
		if (p[i] == c2)
			return (p + i);
		i++;
	}
	return (NULL);
}
