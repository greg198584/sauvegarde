/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 15:44:29 by igomez            #+#    #+#             */
/*   Updated: 2014/09/18 16:38:49 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DLIST_H
# define FT_DLIST_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct		s_list
{
	struct s_list	*next;
	struct s_list	*prev;
	struct s_list	*down;
	int				index;
	char			value;
}					t_dlist;

typedef struct		s_param
{
	int				nb_line;
	int				linesize;
	int				error;
	char			empty;
	char			full;
	char			obs;
}					t_param;

int					ft_atoi(char *str);
int					ft_solve(int fd);
int					is_valid(t_param *p, char buf, int size);
int					is_valid_line(t_dlist *list, t_param *p);
t_dlist				*dlist_new(char value);
t_param				*init_param(int fd);
t_dlist				*init_map(t_dlist *list, t_param *p, int fd);
t_dlist				*init_map_lines(t_dlist *l, t_param *p, int fd, int size);
void				dlist_clear(t_dlist *list);
void				dlist_print_map(t_dlist *list);
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					checkdown(int index, t_param *p, int size);
void				checksquare(t_dlist *list, t_param *p, int *i, int *size);
void				engine(t_dlist *list, t_param *p);
void				apply_solv(t_dlist *list, t_param *p, int index, int size);

#endif
