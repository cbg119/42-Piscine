/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 11:15:10 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/24 11:30:43 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int first_number;
	int second_number;

	first_number = 0;
	while (first_number < 99)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			ft_putchar(first_number / 10 + '0');
			ft_putchar(first_number % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second_number / 10 + '0');
			ft_putchar(second_number % 10 + '0');
			if (first_number != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_number++;
		}
		first_number++;
	}
}
