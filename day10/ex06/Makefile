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
