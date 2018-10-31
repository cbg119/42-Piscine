/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:47:34 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/30 17:30:53 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;

	if (min >= max)
	{
		return (NULL);
	}
	if (!(result = malloc(sizeof(int) * (max - min))))
	{
		result = (NULL);
		return (result);
	}
	while (max >= min)
	{
		result[max - min - 1] = max - 1;
		max--;
	}
	return (result);
}
