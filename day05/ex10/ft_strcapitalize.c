/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 11:30:05 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/29 15:57:19 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[index] != '\0')
	{
		if (is_alphanumeric(str[index]))
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
			{
				if (is_alphanumeric(str[index - 1]))
					str[index] += 32;
			}
			else
			{
				if (!is_alphanumeric(str[index - 1]) &&
						(str[index] >= 'a' && str[index] <= 'z'))
					str[index] -= 32;
			}
		}
		index++;
	}
	return (str);
}
