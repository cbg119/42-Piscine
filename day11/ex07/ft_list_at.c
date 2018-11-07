/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:38:19 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 22:15:39 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int counter;

	counter = 0;
	if (!begin_list)
		return (NULL);
	while (begin_list)
	{
		if (counter == nbr)
			return (begin_list);
		begin_list = begin_list->next;
		counter++;
	}
	return (NULL);
}
