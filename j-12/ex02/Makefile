# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glafitte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/11 09:05:57 by glafitte          #+#    #+#              #
#    Updated: 2014/09/11 18:56:09 by glafitte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c ft_atoi.c 
all:
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_tail.o ft_atoi.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
