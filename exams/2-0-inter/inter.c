/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:50:26 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/14 15:05:34 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		seen[128];

	if (argc == 3)
	{
		i = 0;
		while (i < 128)
			seen[i++] = 0;
		i = 0;
		while (argv[1][i])
		{
			seen[argv[1][i]] += 1;
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if(seen[argv[2][i]] == 1)
				seen[argv[2][i]] = 2;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (seen[argv[1][i]] == 2)
			{
				write(1, &argv[1][i], 1);
				seen[argv[1][i]] = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
