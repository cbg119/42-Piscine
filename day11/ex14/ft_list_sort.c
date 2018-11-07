/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 21:51:21 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 22:28:18 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp) ())
{
	t_list *data_store;
	t_list *current;

	if (!(*begin_list) || !begin_list)
		return ;
	current = *begin_list;
	while (current->next)
	{
		if ((*cmp)(current->next->data, current->data) < 0)
		{
			data_store = current->data;
			current->data = current->next->data;
			current->next->data = data_store;
			current = *begin_list;
		}
		else
			current = current->next;
	}
}
