/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 12:31:31 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/05 13:16:13 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->data = data;
	element->next = NULL;
	return (element);
}
