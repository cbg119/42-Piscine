/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:33:49 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/30 22:59:13 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int dest_i;
	int src_i;
	int counter;

	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	src_i = 0;
	counter = 0;
	while (counter < nb && src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
		counter++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
