/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 12:47:28 by dsalca            #+#    #+#             */
/*   Updated: 2016/01/12 12:49:47 by dsalca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = (char *)s + ft_strlen(s);
	while (*aux != c)
	{
		if (aux == s)
		{
			return (NULL);
		}
		aux--;
	}
	return (aux);
}
