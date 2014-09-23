# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glafitte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/13 21:23:45 by glafitte          #+#    #+#              #
#    Updated: 2014/09/13 21:38:14 by glafitte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = eval_expr
SRCDIR = ./srcs/
INCDIR = ./includes/
SRCS = $(SRCDIR)doop.c \
	   $(SRCDIR)opp.c \
	   $(SRCDIR)tool.c \
	   $(SRCDIR)ft_evalexpr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) -o $(NAME)  $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS)  -g -o $@ -c $^ -I$(INCDIR)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all


