/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 16:09:44 by igomez            #+#    #+#             */
/*   Updated: 2014/09/17 13:30:11 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist		*dlist_new(char value)
{
	t_dlist		*list;

	if ((list = malloc(sizeof(t_dlist))) == NULL)
		return (NULL);
	list->value = value;
	list->next = NULL;
	list->prev = NULL;
	list->down = NULL;
	list->up = NULL;
	list->index = 0;
	return (list);
}

t_dlist		*init_map(t_dlist *list, t_param *p, int fd)
{
	t_dlist *ptr;
	char	buf;
	int		rd;

	while ((rd = read(fd, &buf, 1)) > 0)
	{
		if (list == NULL)
		{
			list = dlist_new(buf);
			ptr = list;
		}
		else
		{
			ptr->next = dlist_new(buf);
			ptr->next->index = ptr->index + 1;
			ptr->next->prev = ptr;
			ptr = ptr->next;
		}
		if (ptr->prev != NULL && ptr->prev->value == '\n')
		{
			ptr = init_map_lines(list, p, fd, 1);
			break ;
		}
	}
	return (list);
}

t_dlist		*init_map_lines(t_dlist *l, t_param *p, int fd, int size)
{
	t_dlist *top;
	t_dlist	*ptr;
	char	buf;
	int		rd;

	top = l;
	while (l->next)
		l = l->next;
	ptr = l;
	p->linesize = ptr->prev->index;
	while ((rd = read(fd, &buf, 1)) > 0)
	{
		ptr->next = dlist_new(buf);
		ptr->next->index = ptr->index + 1;
		ptr->next->prev = ptr;
		top->down = ptr;
		ptr->up = top;
		top = top->next;
		ptr = ptr->next;
		if (!is_valid(p, buf, size))
			return (NULL);
		size = (buf != '\n') ? size + 1 : 0;
	}
	return (l);
}

int			is_valid(t_param *p, char buf, int size)
{
	if (buf != p->empty && buf != p->obs && buf != '\n')
		return (0);
	if (buf == '\n')
		if ((unsigned int)size != p->linesize)
			return (0);
	return (1);
}
