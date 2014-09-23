/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 15:50:46 by igomez            #+#    #+#             */
/*   Updated: 2014/09/17 16:59:14 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_dlist.h"
#include "../Includes/ft_print.h"

#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_dlist	*list;

	int	save_index;
	int	long_max;

	if (argc < 2)
		return (0);
	list = dlist_init(argv[1]);
	if (list)
	{
		dlist_print_debug(list);
		printf("\n\n");
		dlist_print_map(list);
	//printf("Taper vos coordonne : ");
	//scanf("%d", &find_index);
	//t_dlist *tmp; 
	//tmp = ft_find_at(list, find_index);
	dlist_find_obstacle(list);
	//printf("Valeur trouvee en a l'index : %d = %c\n", find_index, ft_find_at(list, find_index)->value);//, find_index, tmp->value);
	int max = ft_find_big_place(list, &save_index);
	//printf("la valeur la plus longue est : %d | commencent a l'index : %d\n", ft_find_big_place(list, &save_index));
	ft_print_map(list, save_index, max);
	ft_print(list);
	}
	return (0);
}
