/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 15:44:29 by igomez            #+#    #+#             */
/*   Updated: 2014/09/17 16:48:59 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DLIST_H
# define FT_DLIST_H

typedef struct		s_list
{
	struct s_list	*next;
	struct s_list	*prev;
	struct s_list	*down;
	struct s_list	*up;
	unsigned int	index;
	char			value;
}					t_dlist;

t_dlist				*dlist_init(char *file);
t_dlist				*dlist_init_lines(t_dlist *list, int fd);
t_dlist				*dlist_new(char value);
t_dlist				*dlist_pop(t_dlist *list, unsigned int n);

t_dlist				*ft_find_at(t_dlist *list, int find_index);
void				dlist_find_obstacle(t_dlist *list);
void				flist_find_big_place(t_dlist *list);
int					ft_find_big_place(t_dlist *list, int *save_index);
void				ft_print_map(t_dlist *list, int index, int long_max);
void				ft_print(t_dlist *list);


#endif
