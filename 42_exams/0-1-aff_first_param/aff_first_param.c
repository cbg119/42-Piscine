/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:22:08 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 14:25:28 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
