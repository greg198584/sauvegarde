/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 11:56:32 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/04 12:02:46 by glafitte         ###   ########.fr       */
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

	i = argc - 1;
	a = 0;
	while (i > 0)
	{
		while (argv[i][a])
		{
			ft_putchar(argv[i][a]);
			a++;
		}
		ft_putchar('\n');
		i--;
		a = 0;
	}
	return (0);
}
