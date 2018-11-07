/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:04:54 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 15:18:34 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previousn;
	t_list *currentn;
	t_list *nextn;

	previousn = 0;
	currentn = *begin_list;
	nextn = 0;
	while (currentn)
	{
		nextn = currentn->next;
		currentn->next = previousn;
		previousn = currentn;
		currentn = nextn;
	}
	*begin_list = previousn;
}
