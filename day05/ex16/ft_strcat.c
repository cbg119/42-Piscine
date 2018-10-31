/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 22:54:46 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/30 22:59:31 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int dest_i;
	int src_i;

	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	src_i = 0;
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
