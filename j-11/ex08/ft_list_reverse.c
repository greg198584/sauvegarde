/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 16:13:28 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/10 18:28:46 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include  <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp_list;
	t_list *tmp;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	tmp_list = *begin_list;
	tmp = tmp_list->next;
	ft_list_reverse(&tmp);
	tmp_list->next->next = tmp_list;
	tmp_list->next = NULL;
	*begin_list = tmp;
}
