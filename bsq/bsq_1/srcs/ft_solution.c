/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 16:45:07 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/17 17:07:57 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_print.h"
#include "../Includes/ft_dlist.h"
#include <stdlib.h>

void	ft_find_index(t_dlist *list, int index, int long_max)
{

}
void	ft_print_map(t_dlist *list, int index, int long_max)
{
	int	i;
	int index_end;

	i = 0;
	index_end = index;
	while ( list != NULL)
	{
		if (list->index == (index - long_max))
		{
			if(list->index == index_end)
				break;
			if (list->value == '.')
				list->value = 'X';
				index++;
		}
		list = list->next;
	}
}

void	ft_print(t_dlist *list)
{
while ( list!= NULL)
	{
		ft_putchar(list->value);
		list = list->next;
	}
}

void	dlist_find_obstacle(t_dlist *list)
{
	while (list != NULL)
	{
		if (list->index == 0)
			list = list->next;
		if(list->value == 'o')
		{
		ft_putstr("Obstacle trouve a l'index : ");
		ft_putnbr(list->index);
		ft_putchar('\n');
		}
		list = list->next;
	}
}

int		ft_find_big_place(t_dlist *list, int *save_index)
{
	int	max;
	int	i;
	int	index;

	max = 0;
	i = 0;
	while (list != NULL)
	{
		if(list->value == 'o')
		{
			if (i > max)
			{
				max = i;
				*save_index = list->index;
				index = (list->index) - max;
			}
				i = 0;
		}
		list = list->next;
		i++;
	}
	return (max);
}

t_dlist	*ft_find_at(t_dlist *list, int find_index)
{
	while (list->index != find_index)
	{
			list = list->next;
	}
	return (list);
}
