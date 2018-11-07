/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:25:40 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 15:29:13 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin, void (*f) (void *))
{
	t_list *head;

	head = begin;
	while (head)
	{
		(*f)(head->data);
		head = head->next;
	}
}
