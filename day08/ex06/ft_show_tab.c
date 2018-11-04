/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 13:19:36 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/02 11:50:18 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = -nb;
		ft_putnbr(147483648);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_print_word_tables(char **tab)
{
	int index;
	int index2;

	index = 0;
	while (tab[index])
	{
		index2 = 0;
		while (tab[index][index2])
		{
			ft_putchar(tab[index][index2]);
			index2++;
		}
		ft_putchar('\n');
		index++;
	}
}

void	ft_show_tab(t_stock_par *par)
{
	int index;
	int sub_index;

	index = 0;
	while (par[index].str)
	{
		sub_index = 0;
		while (par[index].copy[sub_index])
		{
			ft_putchar(par[index].copy[sub_index]);
			sub_index++;
		}
		ft_putchar('\n');
		ft_putnbr(par[index].size_param);
		ft_putchar('\n');
		ft_print_word_tables(par[index].tab);
		index++;
	}
}
