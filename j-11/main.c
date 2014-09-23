/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 15:03:36 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/11 16:11:02 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "proto_42.h"
#include "ex01/ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
void ft_list_reverse(t_list **begin_list);

int		main(void)
{
	//int		count_result;
	t_list *list;

	list = ft_create_elem((char*)"toto");
	ft_list_push_back(&list, (char*)"baba");
	ft_list_push_back(&list, (char*)"salut");
	ft_list_push_back(&list, (char*)"coucou");
	ft_list_push_back(&list, (char*)"choupette");
	ft_list_push_front(&list, (char*)"BIBI");
	//count_result = ft_list_size(list);
	
	//t_list *element;
	//element = ft_list_last(list);
	//list = ft_list_push_params(argc, argv);
	//ft_list_clear(&list);
	//element = ft_list_at(list, 3);
	
	/*while (list)
	{
		ft_putstr(list->data);
		ft_putchar('\n');
			list = list->next;
	}*/
	
	//ft_list_reverse(&list);

	while (list)
	{
		ft_putstr(list->data);
		ft_putchar('\n');
			list = list->next;
	}

	//ft_putstr(element->data);
	//ft_putchar('\n');
	//ft_putnbr(count_result);
	return (0);
}
