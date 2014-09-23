/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 16:42:41 by igomez            #+#    #+#             */
/*   Updated: 2014/09/16 14:20:12 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_print.h"
#include "../Includes/ft_dlist.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	dlist_print_debug(t_dlist *list)
{
	while (list != NULL)
	{
		printf("Index: [%d]  ", list->index);
		printf("Value: [%c]  ", (list->value == '\n') ? '*' : list->value);
		if (list->next)
			printf("N: [%c]  ", list->next->value == '\n' ? '*' : list->next->value);
		else
			printf("N: [ ]  ");
		if (list->prev)
            printf("P: [%c]  ", list->prev->value == '\n' ? '*' : list->prev->value);
		else
            printf("P: [ ]  ");
		if (list->up)
            printf("Up: [%c]  ", list->up->value == '\n' ? '*' : list->up->value);
		else
            printf("Up: [ ]  ");
		if (list->down)
            printf("D: [%c] \n ", list->down->value == '\n' ? '*' : list->down->value);
		else
            printf("D: [ ]  \n");
		list = list->next;
	}
}

void	dlist_print_map(t_dlist *list)
{
	while (list != NULL)
	{
		ft_putchar(list->value);
		list = list->next;
	}
}
