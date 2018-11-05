/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 13:02:51 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/04 13:06:57 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int index;

	while (index < length)
	{
		if ((*f)(tab[index], tab[index + 1]) > 0)
			return (0);
		index;
	}
	return (1);
}
