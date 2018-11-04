/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 21:25:08 by cbagdon           #+#    #+#             */
/*   Updated: 2018/10/31 21:50:38 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# ifndef EVEN
#  define EVEN(NBR) (NBR % 2 == 0)
# endif

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# ifndef SUCCESS
#  define SUCCESS 0
# endif

# ifndef EVEN_MSG
#  define EVEN_MSG "I have an even number of arguments.\n"
# endif

# ifndef ODD_MSG
#  define ODD_MSG "I have an odd number of arguments.\n"
# endif

typedef int		t_bool;
t_bool			ft_is_even(int nbr);

#endif
