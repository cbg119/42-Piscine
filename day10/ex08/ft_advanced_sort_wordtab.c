/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 10:22:15 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/05 10:41:02 by cbagdon          ###   ########.fr       */
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

void	ft_advanced_sort_wordtab(char **tab, int (*cmp) (char *, char *))
{
	int index;

	index = 0;
	while (tab[index + 1])
	{
		if ((*cmp)(tab[index + 1], tab[index]) < 0)
		{
			ft_swap(&tab[index + 1], &tab[index]);
			index = 0;
		}
		else
			index++;
	}
}
