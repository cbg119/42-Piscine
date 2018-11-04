FILE = libft.a
SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECT_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = includes/*

all:	create_library

create_library:
	gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(SOURCES)
	ar -rv $(FILE) *.o
	ranlib $(FILE)

clean:
	rm -rf *.o

fclean:
	rm -rf $(FILE)

re:
	fclean all
