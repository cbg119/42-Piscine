/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 23:45:04 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/02 00:30:39 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int x;
	int y;

	x = 0;
	while (factory[x])
	{
		y = 0;
		while (factor[x][y])
		{
			free(fatory[x][y]);
			y++;
		}
		free(factory[x]);
		x++;
	}
	free(factory);
}
