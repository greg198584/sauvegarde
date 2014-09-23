/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 15:55:26 by igomez            #+#    #+#             */
/*   Updated: 2014/09/17 17:33:13 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

void	bruteforce_checksquare(t_dlist *list, t_param *p, int *i, int *size)
{
	int		len;
	int		save_len;
	int		line;
	t_dlist *ptr2;
	t_dlist *ptr;

	ptr = list;
	line = 0;
	len = p->linesize - (ptr->index % p->linesize);
	save_len = len;
	while (ptr != NULL && line++ < len)
	{
		ptr2 = ptr;
		while (ptr2->value == p->empty && ptr2->next)
			ptr2 = ptr2->next;
		len = ptr2->index - ptr->index;
		if (line >= len || (ptr2->index - ptr->index) < *size)
			break ;
		save_len = (len < save_len) ? len : save_len;
		ptr = ptr->down;
	}
	save_len = (line < save_len) ? line : save_len;
	if (save_len > *size)
	{
		*i = list->index;
		*size = save_len;
	}
}

void	bruteforce_engine(t_dlist *list, t_param *p)
{
	t_dlist *ptr;
	int		index;
	int		size;

	index = 0;
	size = 0;
	ptr = list;
	while (ptr->next)
	{
		if (ptr->value == p->empty)
			bruteforce_checksquare(ptr, p, &index, &size);
		ptr = ptr->next;
	}
	print_solution(list, p, index, size);
}

void	print_solution(t_dlist *list, t_param *p, int index, int size)
{
	int		i;
	int		j;
	t_dlist *ptr2;
	t_dlist *ptr;

	ptr = list;
	while (ptr->index % p->linesize != index % p->linesize)
		ptr = ptr->next;
	while (ptr->index % p->linesize != index % p->linesize)
		ptr = ptr->down;
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
