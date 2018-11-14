/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 09:47:42 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/13 09:56:40 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			i = 0;
			repeat = 1;
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
				repeat = *argv[1] - 'a' + 1;
			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
				repeat = *argv[1] - 'A' + 1;
			while (i < repeat)
			{
				write(1, &(*argv[1]), 1);
				i++;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
