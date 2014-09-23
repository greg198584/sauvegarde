/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 16:42:41 by igomez            #+#    #+#             */
/*   Updated: 2014/09/18 15:33:04 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_dlist.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	dlist_print_map(t_dlist *list)
{
	while (list != NULL)
	{
		ft_putchar(list->value);
		list = list->next;
	}
}

void	dlist_clear(t_dlist *list)
{
	while (list->next != NULL)
	{
		list = list->next;
		free(list->prev);
	}
	free(list);
}
