/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:08:39 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/31 20:19:42 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_word(char letter, char letterb)
{
	return (((letter >= '0' && letter <= '9') ||
			(letter >= 'a' && letter <= 'z') ||
			(letter >= 'A' && letter <= 'Z')) &&
			(letterb == ' ' || letterb == '\t' || letterb == '\n'));
}

int		get_word_count(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_word(str[i], str[i - 1]) || ((str[i] != ' ' && str[i] != '\t' &&
					str[i] != '\n') && i == 0))
			count++;
		i++;
	}
	return (count);
}

int		check_not_double(int i, char *str)
{
	return (str[i - 1] != ' ' && str[i - 1] != '\t' && str[i - 1] != '\n' &&
			i > 0);
}

int		*get_word_sizes(char *str)
{
	int			word_count;
	int			*word_sizes;
	int			index;
	int			i;

	word_count = get_word_count(str);
	word_sizes = malloc(word_count * sizeof(int));
	i = 0;
	while (i <= word_count)
	{
		word_sizes[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			word_sizes[index]++;
		else if (check_not_double(i, str))
			index++;
		i++;
	}
	return (word_sizes);
}

char	**ft_split_whitespaces(char *str)
{
	int			*word_sizes;
	char		**strings;
	int			i;
	int			index;
	int			i_index;

	word_sizes = get_word_sizes(str);
	strings = malloc((get_word_count(str) + 1) * sizeof(char *));
	i = -1;
	index = 0;
	i_index = 0;
	while (str[++i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if (i == 0 || is_word(str[i], str[i - 1]))
				strings[index] = malloc(word_sizes[index] * sizeof(char));
			strings[index][i_index] = str[i];
			strings[index][++i_index] = '\0';
		}
		else if (check_not_double(i, str) && ++index)
			i_index = 0;
	}
	strings[get_word_count(str)] = 0;
	return (strings);
}
