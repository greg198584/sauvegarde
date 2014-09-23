/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 16:09:44 by igomez            #+#    #+#             */
/*   Updated: 2014/09/16 14:19:44 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_dlist.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

t_dlist		*dlist_new(char value)
{
	t_dlist		*list;

	list = NULL;
	list = malloc(sizeof(t_dlist));
	if (list != NULL)
	{
		list->value = value;
		list->next = NULL;
		list->prev = NULL;
		list->down = NULL;
		list->up = NULL;
		list->index = 0;
	}
	return (list);
}
/*
int			dlist_size(t_dlist *list)
{
	int		index;

	index = 1;
	while (list && index++)
		list = list->next;
	return (--index);
}*/

t_dlist     *dlist_pop(t_dlist *list, unsigned int n)
{
    t_dlist *tmp;

    if (list == NULL)
        return (NULL);
    if (n)
    {
        tmp = list->next;
        free(list);
        return (dlist_pop(tmp, n - 1));
    }
    return (list);
}

t_dlist     *dlist_init(char *file)
{
    t_dlist *list;
    t_dlist *ptr;
    char    buff;
    int     fd;

    fd = open(file, O_RDONLY, S_IREAD);
    if (fd < 1)
        return (NULL);
    while (read(fd, &buff, 1) > 0)
    {
		if (list == NULL)
		{
            list = dlist_new(buff);
            ptr = list;
        }
        else
        {
            ptr->next = dlist_new(buff);
            ptr->next->index = ptr->index + 1;
            ptr->next->prev = ptr;
            ptr = ptr->next;
        }
        if (ptr->prev && ptr->prev->value == '\n')
        {
            ptr = dlist_init_lines(list, fd);
            break ;
        }
    }
    return (list);
}

t_dlist		*dlist_init_lines(t_dlist *list, int fd)
{
	t_dlist *upper;
	t_dlist	*line;
	char	buff;

	upper = list;
	while (list->next != NULL)
		list = list->next;
	line = list;
	while (read(fd, &buff, 1) > 0)
	{
		line->next = dlist_new(buff);
		line->next->index = line->index + 1;
		line->next->prev = line;
		upper->down = line;
		line->up = upper;
		upper = upper->next;
		line = line->next;
	}
	return (list);
}
