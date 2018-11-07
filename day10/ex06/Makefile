# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 19:38:19 by cbagdon           #+#    #+#              #
#    Updated: 2018/11/06 19:38:56 by cbagdon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = srcs/ft_atoi.c srcs/ft_putnbr.c srcs/main.c
OBJECTS = ft_atoi.o ft_putnbr.o main.o
INCLUDES = includes

all:	$(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) -I $(INCLUDES) $(SRCS)

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
