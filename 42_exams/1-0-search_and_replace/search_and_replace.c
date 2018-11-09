/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:14:09 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 23:17:50 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		i++;
	}
	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
