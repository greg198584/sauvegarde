# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glafitte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/14 17:03:34 by glafitte          #+#    #+#              #
#    Updated: 2014/09/14 20:04:11 by glafitte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = colle-2

SRC = src/ft_find_colle.c src/ft_op.c src/ft_print_colle.c src/main.c

OBJ = ft_find_colle.o ft_op.o ft_print_colle.o  main.o

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
