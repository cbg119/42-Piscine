/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:31:19 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/15 11:40:17 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		print_space;

	if (argc == 2)
	{
		i = 0;
		print_space = 0;
		while (is_blank(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (is_blank(argv[1][i]))
				print_space = 1;
			if (!(is_blank(argv[1][i])))
			{
				if (print_space)
					write(1, " ", 1);
				print_space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

