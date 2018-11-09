/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:43:19 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/09 10:48:02 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while (i > 0)
	{
		(i & octet) ? write(1, "1", 1) : write (1, "0", 1);
		(i & octet) ? octet -= i : 0;
		i /= 2;
	}

}

int		main(void)
{
	unsigned char letter;

	letter = '1';
	print_bits(letter);
	return (0);
}