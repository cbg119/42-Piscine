/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:02:52 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/11 12:18:34 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

int		eval_expr(char *str)
{
	int		result;

	g_exp = remove_whitespace(str);
	result = parse_add();
	return (result);
}
