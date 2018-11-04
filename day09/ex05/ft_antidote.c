/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 22:47:27 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/01 22:55:37 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && i > k))
		return (i);
	else if ((j > i && j < k) || (j < i && j > k))
		return (j);
	return (k);
}