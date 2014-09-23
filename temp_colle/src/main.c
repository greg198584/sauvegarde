/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 09:12:13 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/14 23:15:24 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include "ft_colle2.h"

int		ft_size_line(char buffer)
{
	if (buffer == '\n')
		return (1);
	else
		return (0);
}

void	ft_which_colle(int *tab_colle, char buffer)
{
	tab_colle[0] = ft_find_colle00(buffer);
	tab_colle[1] = ft_find_colle01(buffer);
	tab_colle[2] = ft_find_colle02(buffer);
	tab_colle[3] = ft_find_colle03(buffer);
	tab_colle[4] = ft_find_colle04(buffer);
}


int		main(void)
{
	char	buffer;
	int		tab_colle[4];
	int		nb_lines;
	int		nb_cols;
	
	nb_cols = 0;
	nb_lines = 1;
	while (read(0, &buffer, 1) != '\0')
	{
		if (buffer == '\n')
			break;
		else
			nb_cols += 1;
	}
	while (read(0, &buffer, 1) != '\0')
	{
		nb_lines += ft_size_line(buffer);
		ft_which_colle(tab_colle, buffer);
	}
	if(tab_colle[0] == -1 && tab_colle[1] == -1 && tab_colle[2] == -1 \
			&& tab_colle[3] == -1 && tab_colle[4] == -1)
	{
		write (1, "aucun", 6);
		return (0);
	}
		ft_print_colle(tab_colle, nb_cols, nb_lines);
		ft_print_colle_2(tab_colle, nb_cols, nb_lines);

		return (0);
}
