/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:42:24 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/15 11:43:49 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		count;

	count = 0;
	if (!begin_list)
		return (count);
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}
