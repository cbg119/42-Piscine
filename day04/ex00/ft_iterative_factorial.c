/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:02:19 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/27 14:39:48 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int factorial;

	result = 1;
	factorial = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (factorial <= nb)
	{
		result *= factorial;
		factorial++;
	}
	return (result);
}
