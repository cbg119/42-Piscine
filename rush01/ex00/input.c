/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 10:15:20 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/03 18:44:57 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudo_header.h"

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int		is_valid_line(char *str)
{
	if (ft_strlen(str) != 9)
		return (0);
	while (*str)
	{
		if (!((*str >= '1' && *str <= '9') || (*str == '.')))
			return (0);
		str++;
	}
	return (1);
}

int		is_valid_input(int argc, char **argv)
{
	int index;

	if (argc != 10)
		return (0);
	index = 1;
	while (index < 10)
	{
		if (!is_valid_line(argv[index]))
			return (0);
		index++;
	}
	return (1);
}

int		check_empty_spaces(char **puzzle, int *row, int *column)
{
	*row = 0;
	while (*row < LENGTH)
	{
		*column = 0;
		while (*column < LENGTH)
		{
			if (puzzle[*row][*column] == '0')
				return (1);
			*column += 1;
		}
		*row += 1;
	}
	return (0);
}
