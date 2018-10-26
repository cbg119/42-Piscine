/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suite.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <cbagdon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 21:09:11 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/25 21:27:46 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "day02/ex00/ft_print_alphabet.c"
#include "day02/ex01/ft_print_reverse_alphabet.c"
#include "day02/ex02/ft_print_numbers.c"
#include "day02/ex03/ft_is_negative.c"
#include "day02/ex04/ft_print_comb.c"
#include "day02/ex05/ft_print_comb2.c"
#include "day02/ex06/ft_putnbr.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_putnbr(42);
	return 0;
}
