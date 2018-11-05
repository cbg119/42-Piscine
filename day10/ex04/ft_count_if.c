/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 12:48:36 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/04 13:00:51 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f) (char*))
{
	int index;
	int result;

	index = 0;
	result = 0;
	while (tab[index])
	{
		if (((*f)(tab[index])) == 1)
			result++;
		index++;
	}
	return (result);
}
