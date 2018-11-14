/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:38:45 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/13 22:44:15 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] += (argv[1][i] + 1 <= 'z') ? 1 : -1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += (argv[1][i] + 1 <= 'Z') ? 1 : -1;
			i++;
		}
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
