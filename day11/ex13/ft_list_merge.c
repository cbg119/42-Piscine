/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:45:58 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 22:29:11 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *current_space;

	if (!(*begin_list1) || !begin_list)
		*begin_list1 = begin_list2;
	else
	{
		current_space = *begin_list1;
		while (current_space->next)
			current_space = current_space->next;
		current_space->next = begin_list2;
	}
}
