/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:40:33 by dsalca            #+#    #+#             */
/*   Updated: 2016/01/12 14:01:28 by dsalca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*c;
	char	*r;
	size_t	len;

	c = (char *)ft_memchr(dst, '\0', size);
	if (c == NULL)
		return (size + ft_strlen(src));
	r = (char *)src;
	len = (size_t)(c - dst) + ft_strlen(r);
	while ((size_t)(c - dst) < size - 1 && *r != '\0')
	{
		*c = *r;
		c++;
		r++;
	}
	*c = '\0';
	return (len);
}
