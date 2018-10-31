/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 22:55:54 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/30 22:55:56 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
			return (0);
		index++;
	}
	return (1);
}
