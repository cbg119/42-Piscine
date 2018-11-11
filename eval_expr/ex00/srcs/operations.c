/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 10:18:45 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/11 11:52:02 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

int		parse_add(void)
{
	int		factor;

	factor = parse_multiply();
	while (*g_exp == '+' || *g_exp == '-')
	{
		if (*g_exp == '+')
		{
			g_exp++;
			factor += parse_multiply();
		}
		else if (*g_exp == '-')
		{
			g_exp++;
			factor -= parse_multiply();
		}
	}
	return (factor);
}

int		parse_multiply(void)
{
	int		factor;

	factor = parse_number();
	while (*g_exp == '*' || *g_exp == '/' || *g_exp == '%')
	{
		if (*g_exp == '*')
		{
			g_exp++;
			factor *= parse_number();
		}
		else if (*g_exp == '/')
		{
			g_exp++;
			factor /= parse_number();
		}
		else if (*g_exp == '%')
		{
			g_exp++;
			factor %= parse_number();
		}
	}
	return (factor);
}

int		parse_number(void)
{
	int		result;
	int		result2;

	result = 0;
	if (*g_exp >= '0' && *g_exp <= '9')
	{
		while (*g_exp >= '0' && *g_exp <= '9')
		{
			result *= 10;
			result += *g_exp - '0';
			g_exp++;
		}
	}
	else if (*g_exp == '(')
	{
		g_exp++;
		result2 = parse_add();
		g_exp++;
		return (result2);
	}
	return (result);
}
