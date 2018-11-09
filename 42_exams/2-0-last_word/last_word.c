/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:24:48 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/09 10:37:14 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		while (*argv[1])
			argv[1]++;
		argv[1]--;
		while (ft_isblank(*argv[1]))
			argv[1]--;
		while (*argv[1] && !ft_isblank(*argv[1]))
			argv[1]--;
		argv[1]++;
		while (*argv[1] && !ft_isblank(*argv[1]))
		{
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}