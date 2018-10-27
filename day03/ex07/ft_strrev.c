/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <cbagdon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:49:19 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/25 23:23:29 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_strrev(char *str)
{
	char *start;
	char *end;

	start = str;
	end = str + ft_strlen(str) - 1;
	while (end > start)
	{
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		++start;
		--end;
	}
	return (str);
}
