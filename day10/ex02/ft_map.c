/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 00:53:48 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/04 00:59:29 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f) (int))
{
	int		i;
	int		*result;

	result = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		result[i] = ((*f) (tab[i]));
		i++;
	}
	return (result);
}
