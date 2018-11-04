/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:10:36 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/02 13:19:19 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i], 1);
}

ft_bool		open_door(t_door *door)
{
	ft_putstr("Door opening...");
	door.state = OPEN;
	return (TRUE);
}

ft_bool		close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door.state = CLOSE;
	return (TRUE);
}

void		is_door_open(t_door door)
{
	ft_putstr("Door is open ?");
	return (door->state == OPEN);
}

ft_bool		is_door_close(t_door *door)
{
	ft_pustr("Door is close ?");
	return (door->state == CLOSE);
}
