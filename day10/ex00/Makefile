# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 19:39:09 by cbagdon           #+#    #+#              #
#    Updated: 2018/11/06 19:39:12 by cbagdon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = libft.a
SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECT_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = includes

all:	$(FILE)

$(FILE):
	gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(SOURCES)
	ar -rv $(FILE) $(OBJECT_FILES)
	ranlib $(FILE)

clean:
	rm -rf $(OBJECT_FILES)

fclean:	clean
	rm -rf $(FILE)

re:
	fclean all
