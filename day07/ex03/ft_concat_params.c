/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 22:50:56 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/01 14:50:35 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int dest_i;
	int src_i;

	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	src_i = 0;
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		++dest_i;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char		*concatted_params;
	int			mem_size;
	int			counter;

	counter = 1;
	mem_size = 0;
	while (counter < argc)
	{
		mem_size += ft_strlen(argv[counter]);
		counter++;
	}
	concatted_params = malloc((sizeof(char) * mem_size) + 1);
	if (!concatted_params)
		return (NULL);
	counter = 1;
	while (counter < argc)
	{
		ft_strcat(concatted_params, argv[counter]);
		if (counter != argc - 1)
			ft_strcat(concatted_params, "\n");
		counter++;
	}
	return (concatted_params);
}
