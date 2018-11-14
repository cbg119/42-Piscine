/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:16:35 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/14 15:24:50 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	unsigned int	byte;

	result = 0;
	byte = 8;
	while (byte--)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
	}
	return (octet);
}
