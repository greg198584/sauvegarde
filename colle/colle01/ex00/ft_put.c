/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetit <spetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 18:35:21 by spetit            #+#    #+#             */
/*   Updated: 2014/09/07 18:35:22 by spetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	while ((nb / i) >= 10)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		ft_putchar(((nb / i) % 10) + 48);
		i = i / 10;
	}
}
