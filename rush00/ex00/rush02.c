/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:20:39 by ytsai             #+#    #+#             */
/*   Updated: 2018/10/28 21:25:26 by ytsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPPER_CORNER 'A'
#define LOWER_CORNER 'C'

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
			if ((x_c == 1 && y_c == 1) || (x_c == x && y_c == 1))
				ft_putchar(UPPER_CORNER);
			else if ((x_c == 1 && y_c == y) || (x_c == x && y_c < y))
				ft_putchar(LOWER_CORNER);
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
