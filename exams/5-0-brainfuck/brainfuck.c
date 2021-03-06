/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 22:28:23 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/14 22:38:39 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	brainfuck(char *str)
{
	int		i;
	char	*ptr;

	ptr = malloc(sizeof(char) * 2048);
	while (str[i])
	{
		ptr += (str[i] == '>') ? 1 : 0;
		ptr -= (str[i] == '<') ? 1 : 0;
		*ptr += (str[i] == '+') ? 1 : 0;
		*ptr -= (str[i] == '-') ? 1 : 0;
		if (str[i] == '.')
			write(1, ptr, 1);
		if (str[i] == '[')
		{
			while (str[i] != ']')
				i++;
			i++;
		}
		if (str[i] == ']')
		{
			while (str[i] != '[')
				i++;
			i++;
		}
		i++;
	}
	write(1, "\n", 1);
}
