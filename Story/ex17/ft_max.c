/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 10:52:38 by nmuresan          #+#    #+#             */
/*   Updated: 2015/09/11 10:55:05 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int i;
	int max;

	i = 1;
	max = tab[0];
	while (i < lenght)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
