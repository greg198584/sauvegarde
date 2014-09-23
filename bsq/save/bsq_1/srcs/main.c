/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 15:50:46 by igomez            #+#    #+#             */
/*   Updated: 2014/09/16 14:15:51 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_dlist.h"
#include "../Includes/ft_print.h"

#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_dlist	*list;

	if (argc < 2)
		return (0);
	list = dlist_init(argv[1]);
	if (list)
	{
		dlist_print_debug(list);
		printf("\n\n");
		dlist_print_map(list);
	}
	return (0);
}
