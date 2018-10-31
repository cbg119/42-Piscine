/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:44:48 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/29 13:17:42 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z') ||
				(str[index] >= 'A' || str[index] <= 'Z'))
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - ('a' - 'A');
		}
		index++;
	}
	return (str);
}
