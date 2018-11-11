/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 10:17:27 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/11 12:18:04 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

int		parse_number(void);
int		parse_multiply(void);
int		parse_add(void);
int		eval_expr(char *str);

void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	*remove_whitespace(char *str);

char	*g_exp;
#endif
