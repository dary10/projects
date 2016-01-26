/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 13:08:58 by dsalca            #+#    #+#             */
/*   Updated: 2016/01/12 12:39:49 by dsalca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				pn;
	char			*i;
	unsigned int	rez;

	rez = 0;
	i = (char *)str;
	while (ft_isspace(*i))
		i++;
	if (*i == '-')
		pn = -1;
	else
		pn = 1;
	if (*i == '+' || *i == '-')
		i++;
	while (*i >= '0' && *i <= '9')
	{
		rez = rez * 10 + *i - '0';
		i++;
	}
	return (rez * pn);
}
