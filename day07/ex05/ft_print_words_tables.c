/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 20:14:55 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/31 20:27:16 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
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
