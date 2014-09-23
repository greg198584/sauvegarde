/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 21:13:02 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/13 23:04:38 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"
#include "ft_opp.h"

t_doop	parse(char **av)
{
	t_doop		doop;

	doop.a = ft_atoi(av[0]);
	doop.b = ft_atoi(av[2]);
	if (av[1][0] == '+' || av[1][0] == '-' || av[1][0] == '*' ||
		av[1][0] == '/' || av[1][0] == '%')
		doop.op[0] = av[1][0];
	else
		doop.op[0] = '\0';
	return (doop);
}

void	resolve(t_doop doop)
{
	int		i;

	i = 0;
	while (i < 6 && gl_opptab[i].op[0] != doop.op[0])
		i++;
	gl_opptab[i].ft_op(doop.a, doop.b);
}

int		main(int ac, char *av[])
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
