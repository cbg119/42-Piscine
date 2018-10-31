/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:36:34 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/30 17:30:00 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

char			*ft_strdup(char *src)
{
	int			index;
	char		*new_string;

	new_string = malloc(ft_strlen(src) + 1);
	if (!new_string)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		new_string[index] = src[index];
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}
