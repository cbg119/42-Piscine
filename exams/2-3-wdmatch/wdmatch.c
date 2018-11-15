/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:46:09 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/15 14:50:04 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *str1, char *str2)
{
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str1[len])
		len++;
	while (i < len && *str2)
		(str1[i] == *str2++) ? i++ : 0;
	if (i == len)
		write(1, str1, len);
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
