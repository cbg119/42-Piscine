/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:17:33 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/13 11:19:50 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0)
			write(1, &argv[1][i--], 1);
	}
	write(1, "\n", 1);
	return (0);
}