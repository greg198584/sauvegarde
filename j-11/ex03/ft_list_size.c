/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 11:37:48 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/10 13:34:27 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count_list;
	t_list	*list;

	list = begin_list;
	count_list = 0;
	while (list)
	{
		list = list->next;
		count_list++;
	}
	return (count_list);
}
