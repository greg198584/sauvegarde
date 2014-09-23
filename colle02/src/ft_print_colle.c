/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_colle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 16:51:31 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/14 23:01:18 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle2.h"

void	ft_print_colle_size (int nb_cols, int nb_lines)
{
	ft_putnbr(nb_cols);
	ft_putstr("] [");
	ft_putnbr(nb_lines);
	ft_putstr("]");
}

void	ft_print_colle(int *tab_colle, int nb_cols, int nb_lines)
{
	if (tab_colle[0] == 0)
	{
		ft_putstr("[colle-0] [");
		ft_print_colle_size(nb_cols, nb_lines);
	}	
	if (tab_colle[1] == 1)
	{
		ft_putstr("[colle-1] [");
		ft_print_colle_size(nb_cols, nb_lines);
	}	
	if (tab_colle[2] == 2)
	{
		ft_putstr("[colle-02] [");
		ft_print_colle_size(nb_cols, nb_lines);
	}	
}

void	ft_print_colle_2(int *tab_colle, int nb_cols, int nb_lines)
{
	if (tab_colle[3] == 3)
	{
		ft_putstr("[colle-03] [");
		ft_print_colle_size(nb_cols, nb_lines);
	}
	if (tab_colle[4] == 4)
	{
		ft_putstr("[colle-04] [");
		ft_print_colle_size(nb_cols, nb_lines);
	}
	ft_putchar('\n');
}
