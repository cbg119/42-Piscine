/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudo_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 11:17:54 by cbagdon           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/11/04 11:53:36 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDO_HEADER_H
=======
/*   Updated: 2018/11/03 18:19:55 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SUDO_HEADER_H
>>>>>>> e65f49bc41836153021ae46bbe2b6aec9ec5d192
# define SUDO_HEADER_H

# ifndef LENGTH
#  define LENGTH 9
# endif

# ifndef BLANK
#  define BLANK '0'
# endif
# include <unistd.h>

int		ft_strlen(char *str);
int		is_valid_line(char *str);
int		is_valid_input(int argc, char **argv);
int		used_in_row(char **puzzle, int row, char number);
int		used_in_column(char **puzzle, int column, char number);
int		used_in_box(char **puzzle, int row, int column, char number);
int		check_if_legal(char **puzzle, int row, int column, char number);
int		check_empty_spaces(char **puzzle, int *row, int *column);
void	print_array(char **puzzle);
char	**create_array(char **argv);

#endif
