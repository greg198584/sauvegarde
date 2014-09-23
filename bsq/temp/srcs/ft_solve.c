/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 15:55:26 by igomez            #+#    #+#             */
/*   Updated: 2014/09/18 16:41:38 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

int		checkdown(int index, t_param *p, int size)
{
	return ((p->nb_line - (index / (p->linesize + 1))) >= size);
}

void	checksquare(t_dlist *list, t_param *p, int *i, int *size)
{
	int		len[2];
	int		line;
	t_dlist *ptr[2];

	ptr[0] = list;
	line = 0;
	len[0] = p->linesize - (ptr[0]->index % (p->linesize + 1)) + 1;
	len[1] = len[0];
	while (ptr[0] && len[0] > *size && line <= len[0])
	{
		ptr[1] = ptr[0];
		while (ptr[1]->value == p->empty)
			ptr[1] = ptr[1]->next;
		len[0] = ptr[1]->index - ptr[0]->index;
		if (line >= len[0])
			break ;
		++line;
		len[1] = len[0] < len[1] ? len[0] : len[1];
		ptr[0] = ptr[0]->down;
	}
	len[1] = line < len[1] ? line : len[1];
	if (len[1] <= *size)
		return ;
	*i = list->index;
	*size = len[1];
}

void	engine(t_dlist *list, t_param *p)
{
	t_dlist *ptr;
	int		index;
	int		size;

	index = 0;
	size = 0;
	ptr = list;
	while (ptr->next && checkdown(ptr->index, p, size))
	{
		if (ptr->value == p->empty)
			checksquare(ptr, p, &index, &size);
		ptr = ptr->next;
	}
	apply_solv(list, p, index, size);
}

void	apply_solv(t_dlist *list, t_param *p, int index, int size)
{
	int		i;
	int		j;
	t_dlist *ptr2;
	t_dlist *ptr;

	ptr = list;
	while (ptr->index != index)
		ptr = ptr->next;
	i = -1;
	while (++i < size)
	{
		j = -1;
		ptr2 = ptr;
		while (++j < size)
		{
			ptr2->value = p->full;
			ptr2 = ptr2->next;
		}
		ptr = ptr->down;
	}
}
