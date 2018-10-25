/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:26:01 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/24 15:55:47 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	int numbers[9];
	int i;

	i = 0;
	while (i < 9)
	{
		numbers[i] = 0;
		i++;
	}
	i = 1;
	while (i < n)
	{
		numbers[i] = numbers[i-1] + 1;
		i++;
	}
	i = 0;
	while(i < n)
	{
		ft_putchar(numbers[i] + '0');
		i++;
	}
}

int main(void) {
	ft_print_combn(9);
	return 0;
}
