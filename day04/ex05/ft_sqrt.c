/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:13:23 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/26 13:56:13 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;

	result = 1;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (result * result <= nb)
	{
		if (result * result == nb)
		{
			return (result);
		}
		++result;
	}
	return (0);
}
