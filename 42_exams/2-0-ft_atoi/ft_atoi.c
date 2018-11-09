/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:12:15 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/09 13:31:00 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\r' || *str == '\f' || *str == '\v' ||
			*str == '\t' || *str == '\n')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (str - '0');
		str++;
	}
	return (sign * result);
}
