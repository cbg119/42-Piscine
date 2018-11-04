/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:40:49 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/01 23:12:33 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
		return (1);
	else if (*s2 == '*' && *s1)
		return (match(s1, s2 + 1) || (match(s1 + 1, s2)));
	else if (*s2 == '*' && !(*s1))
		return (match(s1, s2 + 1));
	else if (*s2 != '\0' && *s1 != '\0' && (*s2 == *s1))
		return (match(s1 + 1, s2 + 1));
	return (0);
}
