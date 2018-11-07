/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:30:52 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 15:36:39 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f) (void *),
		void *data_ref, int (*cmp) (void *, void *))
{
	t_list *head;

	head = begin_list;
	while (head)
	{
		if (((*cmp)(head->data, data_ref)) == 0)
			(*f)(head->data);
		head = head->next;
	}
}
