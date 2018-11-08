/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:33:22 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/07 18:46:14 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

int		main(int argc, char *argv[])
{
	int		j;
	int		fd;
	int		counter;
	char	bufffer[4096];

	if (!(argc >= 2))
		return (1);
}
