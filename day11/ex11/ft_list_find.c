/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:43:30 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 15:50:10 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp) ())
{
	t_list *head;

	head = begin_list;
	while (head)
	{
		if ((*cmp)(head->data, data_ref) == 0)
			return (head);
		head = head->next;
	}
	return (head);
}
