/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:05:04 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/27 08:16:46 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int count;

	count = 11;
	if (nb < 2)
	{
		return (0);
	}
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7 || nb == 2147483647)
	{
		return (1);
	}
	while (count < nb)
	{
		if (nb % count == 0 && count != nb)
		{
			return (0);
		}
		count += 2;
	}
	return (1);
}
