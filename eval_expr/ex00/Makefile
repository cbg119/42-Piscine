# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 12:25:28 by cbagdon           #+#    #+#              #
#    Updated: 2018/11/11 12:33:04 by cbagdon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRCS = srcs/eval_expr.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/main.c srcs/operations.c srcs/remove_whitespace.c
OBJECT_FILE = eval_expr.o ft_putchar.o ft_putnbr.o main.o operations.o remove_whitespace.o
HEADERS = includes/ft_utils.h

all:	$(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) -I $(HEADERS) $(SRCS)

clean:
	rm -rf $(OBJECT_FILE)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
