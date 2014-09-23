/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 16:42:41 by igomez            #+#    #+#             */
/*   Updated: 2014/09/17 15:51:46 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_dlist.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	dlist_print_debug(t_dlist *list)
{
	printf("Index: [%d]  ", list->index);
	printf("Value: [%c]  ", (list->value == '\n') ? '*' : list->value);
	if (list->next)
		printf("N: [%c]  ",
			list->next->value == '\n' ? '*' : list->next->value);
	else
		printf("N: [ ]  ");
	if (list->prev)
		printf("P: [%c]  ",
			list->prev->value == '\n' ? '*' : list->prev->value);
	else
		printf("P: [ ]  ");
	if (list->up)
		printf("Up: [%c]  ",
			list->up->value == '\n' ? '*' : list->up->value);
	else
		printf("Up: [ ]  ");
	if (list->down)
		printf("D: [%c] \n ",
			list->down->value == '\n' ? '*' : list->down->value);
	else
		printf("D: [ ]  \n");
	list = list->next;
}

void	print_param(t_param *p)
{
	if (p != NULL)
	{
		printf("\n\n=== Parametres ===\n\n");
		printf("Nombre de ligne: [%d]\n", p->nb_line);
		printf("Nombre de caractere par ligne: [%d]\n", p->linesize);
		printf("Char empty: [%c]\n", p->empty);
		printf("Char Obstactle: [%c]\n", p->obs);
		printf("Char Plein: [%c]\n\n", p->full);
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

void	dlist_clear(t_dlist *list)
{
	while (list->next != NULL)
	{
		list = list->next;
		free(list->prev);
	}
	free(list);
}
