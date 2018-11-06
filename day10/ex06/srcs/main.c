/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 21:53:03 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/05 09:21:52 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int		do_op(char **argv)
{
	int a;
	int b;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (*argv[2] == '+')
		return (a + b);
	else if (*argv[2] == '-')
		return (a - b);
	else if (*argv[2] == '*')
		return (a * b);
	else if (*argv[2] == '/')
		return (a / b);
	else if (*argv[2] == '%')
		return (a % b);
	else
		return (0);
}

int		main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	if (*argv[2] == '/' && *argv[3] == '0')
		write(1, "Stop : division by zero\n", 24);
	else if (*argv[2] == '%' && *argv[3] == '0')
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		ft_putnbr(do_op(argv));
		write(1, "\n", 1);
	}
	return (0);
}
