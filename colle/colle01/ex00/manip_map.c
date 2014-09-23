/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetit <spetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 22:29:42 by spetit            #+#    #+#             */
/*   Updated: 2014/09/07 22:48:51 by spetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sudoku.h"

int		change_type(char map)
{
	int nb;

	if (map >= 49 && map <= 57)
	{
		nb = (map - 48);
		return (nb);
	}
	else if (map == 46)
	{
		nb = 0;
		return (nb);
	}
	return (0);
}

int		**creat_int_map(char **av)
{
	int i;
	int j;
	int **map;

	i = 0;
	map = (int **)malloc(sizeof(*map) * 9);
	while (i < 9)
	{
		map[i] = (int *)malloc(sizeof(**map) * 9);
		j = 0;
		while (j < 9)
		{
			map[i][j] = change_type(av[i + 1][j]);
			j++;
		}
		i++;
	}
	return (map);
}

void	ft_print_map(int **map)
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putnbr(map[row][col]);
			ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
