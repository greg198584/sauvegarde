/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetit <spetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 22:28:06 by spetit            #+#    #+#             */
/*   Updated: 2014/09/07 22:45:39 by spetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sudoku.h"

int		c_row(int nb, int **map, int i)
{
	int	j;

	j = 0;
	while (j < 9)
	{
		if (map[i][j] == nb)
			return (0);
		j++;
	}
	return (1);
}

int		c_col(int nb, int **map, int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (map[i][j] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		c_sqr(int nb, int **map, int i, int j)
{
	int c;
	int b;

	b = i - (i % 3);
	c = j - (j % 3);
	i = b;
	while (i < b + 3)
	{
		j = c;
		while (j < c + 3)
		{
			if (map[i][j] == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
