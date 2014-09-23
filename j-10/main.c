/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 11:45:06 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/09 21:19:11 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto_42.h"
#include <stdlib.h>

int	ft_count_if(char **tab, int(*f)(char*));
int ft_is_sort(int *tab, int length, int(*f)(int, int));

int ft_tab(char *str)
{
	return (1);
}

int ft_bidon(int a, int b)
{
	return (0 - (a < b) + (a > b));
}

int	main(int argc, char **argv)
{
	int resultat;

	int	 tab[5]  = {1, 2, 3, 4, 5};
	int	 tab2[5] = {5, 4, 3, 2, 1};
	int	 tab3[5] = {4, 5, 2, 6, 3};
	int	 tab4[5] = {4, 4, 4, 4, 4};

	//resultat = ft_is_sort(tab4, 5, &ft_bidon);
 	resultat = ft_count_if(argv, &ft_tab);
	ft_putnbr(resultat);
	ft_putchar('\n');
	return (0);
}
