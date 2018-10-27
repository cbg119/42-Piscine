/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 09:51:20 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/27 11:47:54 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LEFT_CORNER 'A'
#define RIGHT_CORNER 'C'

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int x_c;
	int y_c;

	if (x < 1 || y < 1)
		return ;
	y_c = 1;
	while (y_c <= y)
	{
		x_c = 1;
		while (x_c <= x)
		{
			if ((x_c == 1 && y_c == 1) || (x_c == 1 && y_c == y))
				ft_putchar(LEFT_CORNER);
			else if ((x_c == x && y_c == 1) || (x_c == x && y_c == y))
				ft_putchar(RIGHT_CORNER);
			else if ((x_c > 1 && x_c < x) && (y_c > 1 && y_c < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			x_c++;
		}
		ft_putchar('\n');
		y_c++;
	}
}
