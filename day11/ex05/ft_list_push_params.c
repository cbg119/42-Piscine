/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:44:56 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 12:47:09 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*temp_list;
	t_list	*current_item;
	int		index;

	index = 0;
	if (ac <= 0)
		return (0);
	temp_list = 0;
	while (index < ac)
	{
		current_item = ft_create_elem(av[index]);
		current_item->next = temp_list;
		temp_list = current_item;
		index++;
	}
	return (current_item);
}
