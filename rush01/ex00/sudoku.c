/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 11:32:53 by cbagdon           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/11/04 12:01:27 by cbagdon          ###   ########.fr       */
=======
/*   Updated: 2018/11/03 17:19:15 by cbagdon          ###   ########.fr       */
>>>>>>> e65f49bc41836153021ae46bbe2b6aec9ec5d192
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudo_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	**create_array(char **argv)
{
	char	**puzzle;
<<<<<<< HEAD
	int		x;
	int		y;
=======
	int x;
	int y;
>>>>>>> e65f49bc41836153021ae46bbe2b6aec9ec5d192

	puzzle = malloc(sizeof(char *) * LENGTH);
	x = 0;
	while (x < LENGTH)
	{
		puzzle[x] = malloc(sizeof(char));
		x++;
	}
	x = 0;
	while (x < LENGTH)
	{
		y = 0;
		while (y < LENGTH)
		{
<<<<<<< HEAD
			puzzle[x][y] = (argv[x + 1][y] == '.') ? '0' : argv[x + 1][y];
=======
			if (argv[x + 1][y] == '.')
				puzzle[x][y] = '0';
			else
				puzzle[x][y] = argv[x + 1][y];
>>>>>>> e65f49bc41836153021ae46bbe2b6aec9ec5d192
			y++;
		}
		x++;
	}
	return (puzzle);
}

void	print_array(char **puzzle)
{
	int x;
	int y;

	x = 0;
	while (x < LENGTH)
	{
		y = 0;
		while (y < LENGTH)
		{
			ft_putchar(puzzle[x][y]);
			if (y != LENGTH - 1)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
