/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 09:39:04 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/12 13:40:47 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_btree.h"

t_btree	*btree_create_node(void *item);
void btree_apply_prefix(t_btree *root, t_btree(*applyf)(void *));

int	main(void)
{
	t_btree	*btree;

	btree = btree_create_node	((char*)"coucou");
	btree_apply_prefix(&btree, btree_create_node((char*)"BABA"));

	while (btree)
 	{
		printf("%s\n", btree->item);
		btree = btree->right;
	}
}
