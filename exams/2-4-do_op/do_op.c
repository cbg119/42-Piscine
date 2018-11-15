/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:54:39 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/15 15:02:02 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char *argv[])
{
	if (argv[2][0] == '+')
		printf("%d", atoi(argv[1]) + atoi(argv[3]));
	else if (argv[2][0] == '-')
		printf("%d", atoi(argv[1]) - atoi(argv[3]));
	else if (argv[2][0] == '*')
		printf("%d", atoi(argv[1]) * atoi(argv[3]));
	else if (argv[2][0] == '/')
		printf("%d", atoi(argv[1]) / atoi(argv[3]));
	else if (argv[2][0] == '%')
		printf("%d", atoi(argv[1]) % atoi(argv[3]));
	printf("\n");
	return (0);
}
