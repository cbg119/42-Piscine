/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 09:30:35 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/05 10:39:36 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s2[i] && !s1[i]) || (s1[i] && !s2[i]))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_wordtab(char **tab)
{
	int index;

	index = 0;
	while (tab[index + 1])
	{
		if (ft_strcmp(tab[index + 1], tab[index]) < 0)
		{
			ft_swap(&tab[index + 1], &tab[index]);
			index = 0;
		}
		else
			index++;
	}
}
