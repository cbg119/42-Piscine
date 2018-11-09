/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:02:41 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/06 20:11:39 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		get_count(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (letter - 'a' + 1);
	else if (letter >= 'A' && letter <= 'Z')
		return (letter - 'A' + 1);
	else
		return (1);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;

		while (*argv[1])
		{
			i = get_count(*argv[1]);
			while (i--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
