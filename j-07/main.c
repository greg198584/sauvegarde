/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 08:56:21 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/05 23:02:57 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "proto_42.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else
	{
		if (n < 0)
		{
		n = -n;
		ft_putchar('-');
		}
		if (n < 10)
			ft_putchar(n + 48);
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
}

int	main(int argc, char **argv)
{
	//int		a;
	//int		b;
	//int		*c;
	//int		d;

	//d = 0;
	//a = atoi(argv[1]);
	//b = atoi(argv[2]);

	//ft_putnbr(argc);
	//c = ft_range(a, b);

	//ft_concat_params(argc, argv);
	/*while (d < (b - a))
	{
		printf("%d\n", c[d]);
		d++;
	}*/
	//char str_src[] = "coucou tous le monde";
	// Pour exercice 03 
	char *string = ft_concat_params(argc, argv);

	//string = ft_strdup(str_src);
	printf("%s", string);

	//int	*tab_nb;
	//int	i;
	//int **ptr;

	//ptr = &tab_nb;
	//i = 0;
	//ft_ultimate_range(ptr, a, b);

	//string = ft_concat_params(argc, argv);

	//while (tab_nb[i])
		//printf("%d\n", tab_nb[i++]);
	return (0);
}
