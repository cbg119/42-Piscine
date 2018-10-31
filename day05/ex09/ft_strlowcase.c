/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:59:16 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/29 13:19:06 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z') ||
				(str[index] >= 'A' || str[index] <= 'Z'))
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
				str[index] = str[index] + ('a' - 'A');
		}
		index++;
	}
	return (str);
}
