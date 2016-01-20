/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 13:38:41 by dsalca            #+#    #+#             */
/*   Updated: 2016/01/12 13:38:44 by dsalca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	if (s1 < s2)
		return (ft_memcpy(s1, s2, n));
	if (s1 > s2)
		return (ft_memcpy_bwd(s1, s2, n));
	return (s1);
}
