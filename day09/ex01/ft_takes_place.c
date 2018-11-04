/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:48:15 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/01 19:31:38 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*time(int hour)
{
	return ((hour >= 0 && hour < 12) ? "A.M." : "P.M.");
}

void	ft_takes_place(int hour)
{
	if (hour < 0 && hour > 23)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s AND ", (hour % 12 == 0) ? 12 : (hour % 12), time(hour));
	hour++;
	if (hour == 24)
		hour = 0;
	printf("%d.00 %s\n", (hour % 12 == 0) ? 12 : (hour % 12), time(hour));
}
