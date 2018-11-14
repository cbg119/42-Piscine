/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 09:58:35 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/13 10:12:27 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		found;
	int		i;

	found = 0;
	i = 0;
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
			{
				found = 1;
				argv[1][i] = argv[3][0];
			}
			i++;
		}
		i = 0;
		while (argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
