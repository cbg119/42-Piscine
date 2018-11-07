/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:54:13 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 22:15:22 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *free_me;

	if (*begin_list == NULL)
		return ;
	while (*begin_list)
	{
		free_me = *begin_list;
		*begin_list = (*begin_list)->next;
		free(free_me);
	}
	*begin_list = NULL;
}
