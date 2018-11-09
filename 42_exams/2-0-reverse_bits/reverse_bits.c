/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:39:15 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/09 13:56:57 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	unsigned int	byte;

	result = 0;
	byte  = 8;
	while (byte--)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
	}
	return (result);
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | octet << 4);
}

void	print_bits(unsigned char octet)
{
	int i;

	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}