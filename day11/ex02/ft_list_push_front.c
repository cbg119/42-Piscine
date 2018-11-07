/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:14:56 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 11:40:38 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_head;

	if (*begin_list)
	{
		new_head = ft_create_elem(data);
		new_head->next = *begin_list;
		*begin_list = new_head;
	}
	else
		*begin_list = ft_create_elem(data);
}
