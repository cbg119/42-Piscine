/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 11:44:44 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/30 12:01:53 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				counter;
	unsigned int	result;

	result = 0;
	while (src[result] != '\0')
		++result;
	counter = 0;
	while (src[counter] != '\0' && counter < ((int)size - 1))
	{
		dest[counter] = src[counter];
		++counter;
	}
	if (size)
		dest[counter] = '\0';
	return (result);
}
