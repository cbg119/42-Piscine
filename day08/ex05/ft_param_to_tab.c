/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 12:20:54 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/02 12:39:02 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		++counter;
	}
	return (counter);
}

char					*ft_strdup(char *src)
{
	int		index;
	int		mem_size;
	char	*new_string;

	mem_size = ft_strlen(src);
	index = 0;
	new_string = malloc(sizeof(char) * mem_size);
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

t_stock_par				*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*arguments;

	arguments = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!arguments)
		return (0);
	i = 0;
	while (i < ac)
	{
		arguments[i].size_param = ft_strlen(av[i]);
		arguments[i].str = av[i];
		arguments[i].copy = ft_strdup(av[i]);
		arguments[i].tab = ft_split_whitespaces(av[i]);
		++i;
	}
	arguments[i].str = 0;
	return (arguments);
}
