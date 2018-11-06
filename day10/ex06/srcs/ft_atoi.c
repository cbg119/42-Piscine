/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:20:40 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/05 09:24:48 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int negative;
	int result;
	int i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == '\r' || str[i] == '\f' || str[i] == '\v' ||
			str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == '\0')
		i++;
	negative = 1;
	result = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= negative;
	return (result);
}
