/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:14:56 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/05 18:57:09 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
