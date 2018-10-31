/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 22:54:39 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/29 23:05:19 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int index;

	index = 0;
	while (argv[0][index] != '\0' && argc)
	{
		ft_putchar(argv[0][index]);
		index++;
	}
	ft_putchar('\n');
	return (0);
}
