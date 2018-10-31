/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 22:33:33 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/30 22:46:07 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *result;
	int counter;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(result = malloc(sizeof(int) * (max - min))))
	{
		result = (NULL);
		return (0);
	}
	counter = -1;
	while (max >= min)
	{
		result[max - min - 1] = max - 1;
		max--;
		++counter;
	}
	*range = result;
	return (counter);
}
