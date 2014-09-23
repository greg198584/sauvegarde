/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 11:01:24 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/04 22:06:42 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i < argc)
	{
		while (argv[i][a])
		{
			ft_putchar(argv[i][a]);
			a++;
		}
		ft_putchar('\n');
		i++;
		a = 0;
	}
	return (0);
}
