/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 11:53:29 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/29 12:30:30 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'a' && str[index] <= 'z') ||
					(str[index] >= 'A' && str[index] <= 'Z')))
			return (0);
		index++;
	}
	return (1);
}
