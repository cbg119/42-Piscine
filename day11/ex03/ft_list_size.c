/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:54:41 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 12:42:10 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list		*head;
	int			counter;

	if (!begin_list)
		return (0);
	head = begin_list;
	counter = 1;
	while (head->next)
	{
		head = head->next;
		counter++;
	}
	return (counter);
}
