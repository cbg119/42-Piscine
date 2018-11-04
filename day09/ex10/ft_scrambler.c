/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 12:43:42 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/02 12:50:00 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int a_temp;
	int b_temp;
	int c_temp;
	int d_temp;

	a_temp = ***a;
	b_temp = *b;
	c_temp = *******c;
	d_temp = ****d;
	*******c = a_temp;
	****d = c_temp;
	*b = d_temp;
	***a = b_temp;
}
