/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 20:44:20 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/07 22:53:49 by spetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sudoku.h"

int		fill_in(int **map, int position, int nb)
{
	int	i;
	int	j;

	if (position == 81)
	{
		ft_print_map(map);
		return (1);
	}
	i = position / 9;
	j = position % 9;
	if (map[i][j] != 0)
		return (fill_in(map, position + 1, nb));
	nb = 1;
	while (nb <= 9)
	{
		if (c_row(nb, map, i) && c_col(nb, map, j) && c_sqr(nb, map, i, j))
		{
			map[i][j] = nb;
			if (fill_in(map, position + 1, nb))
				return (1);
		}
		nb++;
	}
	map[i][j] = 0;
	return (0);
}

int		main(int ac, char **av)
{
	int fill_answer;

	if (ac != 10)
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	fill_answer = fill_in((creat_int_map(av)), 1, 0);
	if (fill_answer == 0)
		ft_putstr("Erreur\n");
	return (0);
}
