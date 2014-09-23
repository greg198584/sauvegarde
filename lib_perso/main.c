/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 11:45:06 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/23 16:28:42 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto_42.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	c;
	//int *ptr_c;
	
	if (argc == 1)
	{
		ft_putstr("{ Usage : rentrer 2 argument - des entiers }\n");
		return (1);
	}

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
	//ptr_c = &c;
	c =  a + b;

	/*char s[] = "abcdefg";
	ft_itoa(s, 1234567, strlen(s) - 1);
	printf("%s\n", s);*/
	ft_printf("somme de %d + %d = %d \n", a, b, c);
	return (0);
}
