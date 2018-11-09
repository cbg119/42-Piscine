/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:01:08 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/09 10:21:36 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int seen[128];

	if (argc == 3)
	{
		i = 0;
		while (i < 128)
			seen[i++] = 0;
		i = 0;
		while (argv[1][i])
		{
			seen[(int)(argv[1][i])] = 1;
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (seen[(int)argv[2][i]] == 1)
				seen[(int)(argv[2][i])] = 2;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if ((int)seen[argv[1][i]] == 2)
			{
				ft_putchar(argv[1][i]);
				seen[(int)argv[1][i]] = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}