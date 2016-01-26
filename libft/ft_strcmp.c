/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:40:02 by dsalca            #+#    #+#             */
/*   Updated: 2016/01/12 13:44:47 by dsalca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	len;
	size_t	len2;
	int		result;

	len = ft_strlen_plus(s1);
	len2 = ft_strlen_plus(s2);
	len = (len <= len2) ? len : len2;
	result = ft_memcmp(s1, s2, len);
	return (result);
}
