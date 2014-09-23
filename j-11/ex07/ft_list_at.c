/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 15:16:47 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/10 16:08:23 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 1;
	while (i < nbr)
	{
		if (!begin_list)
			return (0);
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}
