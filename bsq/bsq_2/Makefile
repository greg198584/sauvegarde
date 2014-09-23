#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igomez <igomez@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/15 15:20:32 by igomez            #+#    #+#              #
#    Updated: 2014/09/17 16:33:04 by igomez           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq

SRC = srcs/main.c \
		srcs/ft_dlist.c \
		srcs/ft_print.c \
		srcs/ft_params.c \
		srcs/ft_string.c \
		srcs/ft_solve.c

OBJ = main.o \
		ft_dlist.o \
		ft_print.o \
		ft_params.o \
		ft_string.o \
		ft_solve.o

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra -I./includes $(SRC)
	@gcc -Wall -Werror -Wextra $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re