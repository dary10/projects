/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 14:14:35 by dsalca            #+#    #+#             */
/*   Updated: 2015/11/03 16:12:06 by dsalca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = ft_strdup((const char *)s);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		str[i] = f((unsigned int)i, str[i]);
		i++;
	}
	return (str);
}
