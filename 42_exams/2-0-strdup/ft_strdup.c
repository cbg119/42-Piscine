/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:48:02 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/09 09:53:47 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(const char *str)
{
	int result;

	result = 0;
	while (str[result])
		result++;
	return (result);
}

char	*ft_strdup(const char *src)
{
	int			index;
	char		*dest;

	index = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
