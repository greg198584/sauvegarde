/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 13:32:22 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/07 13:52:05 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2);

int 	main(int argc, char **argv)
{
	int a = 0;
	if (argc == 1)
	{
		puts("Rentrer 2 chaine de caracteres :");
		return (0);
	}
	a = match(argv[1], argv[2]);
	
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("[ match retourn 1 si sa match 0 si sa match pas ]\n");
	printf("\nLe resultat : %d\n", a);
	return (0);
}
