/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 11:36:25 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/24 11:42:40 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int reversed_number;
	int remainder;

	reversed_number = 0;
	while (nb != 0)
	{
		remainder = nb % 10;
		reversed_number = reversed_number * 10 + remainder;
		nb = nb / 10;
	}
	while (reversed_number != 0)
	{
		ft_putchar((reversed_number % 10) + '0');
		reversed_number = reversed_number / 10;
	}
}
