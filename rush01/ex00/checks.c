/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:31:37 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/03 15:36:53 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudo_header.h"

int		used_in_row(char **puzzle, int row, char number)
{
	int column;

	column = 0;
	while (column < LENGTH)
	{
		if (puzzle[row][column] == number)
			return (1);
		column++;
	}
	return (0);
}

int		used_in_column(char **puzzle, int column, char number)
{
	int row;

	row = 0;
	while (row < LENGTH)
	{
		if (puzzle[row][column] == number)
			return (1);
		row++;
	}
	return (0);
}

int		used_in_box(char **puzzle, int row, int column, char number)
{
	int x;
	int y;

	x = 0;
	while (x < 3)
	{
		y = 0;
		while (y < 3)
		{
			if (puzzle[x + row][y + column] == number)
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

int		check_if_legal(char **puzzle, int row, int column, char number)
{
	if (!used_in_row(puzzle, row, number) &&
			!used_in_column(puzzle, column, number) &&
			!used_in_box(puzzle, row - (row % 3), column - (column % 3), number))
		return(1);
	return (0);
}
