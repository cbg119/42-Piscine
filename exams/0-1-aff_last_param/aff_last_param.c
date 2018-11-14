/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:15:39 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/12 21:54:21 by cbagdon          ###   ########.fr       */
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
	(argc >= 2) ? ft_putstr(argv[argc - 1]) : 0;
	write(1, "\n", 1);
	return (0);
}
