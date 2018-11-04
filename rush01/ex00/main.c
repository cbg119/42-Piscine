/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 11:51:07 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/03 19:01:09 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudo_header.h"

int		solve_it(char **puzzle)
{
	int row;
	int column;
	int number;
	
	if (!check_empty_spaces(puzzle, &row, &column))
		return (1);
	number = 1;
	while (number <= 9)
	{
		if (check_if_legal(puzzle, row, column, number + '0'))
		{
			puzzle[row][column] = number + '0';
			if (solve_it(puzzle))
				return (1);
			puzzle[row][column] = BLANK;
		}
		number++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	char	**puzzle;

	if (!(is_valid_input(argc, argv)))
	{
		write(1, "Error\n", 7);
		return (0);
	}
	puzzle = create_array(argv);
	if (solve_it(puzzle))
	{
		print_array(puzzle);
		return (1);
	}
	write(1, "Error\n", 7);
	return (0);
}
