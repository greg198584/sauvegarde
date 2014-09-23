/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle2.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 16:50:37 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/14 20:03:08 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_COLLE2_H
# define FT_COLLE2_H

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_size_line(char buffer);
void	ft_size_colle(int *nb_cols, int *nb_lines);
void	ft_print_colle(int *tab_colle, int nb_cols, int nb_lines);
void	ft_print_colle_size (int nb_cols, int nb_lines);
void	ft_print_colle_2(int *tab_colle, int nb_cols, int nb_lines);
int		ft_find_colle00(char buffer);
int		ft_find_colle01(char buffer);
int		ft_find_colle02(char buffer);
int		ft_find_colle03(char buffer);
int		ft_find_colle04(char buffer);


#endif
