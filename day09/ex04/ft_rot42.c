/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 21:51:07 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/01 22:14:16 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (str[index] + 16 <= 'z')
				str[index] += 16;
			else
				str[index] -= 10;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z')
		{
			if (str[index] + 16 <= 'Z')
				str[index] += 16;
			else
				str[index] -= 10;
		}
		index++;
	}
	return (str);
}
