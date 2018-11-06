/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:13:32 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/05 18:38:07 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;

	if (*begin_list)
	{
		current = *begin_list;
		while (current->next != NULL)
			current = current->next;
		current->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
