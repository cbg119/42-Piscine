/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 11:58:53 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/02 11:51:49 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef	struct			s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}						t_stock_par;

void					ft_putchar(char c);
void					ft_putnbr(int nb);
void					ft_print_word_tables(char **tab);
void					ft_show_tab(t_stock_par *par);

t_stock_par				*ft_param_to_tab(int ac, char **av);

#endif
