/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 21:20:40 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/13 21:34:45 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

void	ft_sub(int a, int b)
{
	int		res;

	res = a - b;
	ft_putnbr(res);
	ft_putchar('\n');
}

void	ft_add(int a, int b)
{
	int		res;

	res = a + b;
	ft_putnbr(res);
	ft_putchar('\n');
}

void	ft_mul(int a, int b)
{
	int		res;

	res = a * b;
	ft_putnbr(res);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	int		res;

	if (b == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		res = a / b;
		ft_putnbr(res);
		ft_putchar('\n');
	}
}

void	ft_mod(int a, int b)
{
	int		res;

	res = a % b;
	ft_putnbr(res);
	ft_putchar('\n');
}
