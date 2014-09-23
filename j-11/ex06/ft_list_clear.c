/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 14:58:18 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/10 15:12:11 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_clear(t_list **begin_list)
{
	if ((*begin_list)->next)
		ft_list_clear(&(*begin_list)->next);
	*begin_list = NULL;
	free(*begin_list);
}
