/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:49:11 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/14 21:28:10 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = -nb;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	write(1, nbr % 10 + '0', 1);
}

int		is_prime(int number)
{
	int		i;

	if (number < 2)
		return (0);
	i = 2;
	while (i <= number / 2)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		prime_sum(int number)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (i < number)
	{
		if (is_prime(i))
			result += i;
		i++;
	}
	return (result);
}

int		main(int argc, char *argv[])
{
	if (argc == 2 && 
	return (0);
}
