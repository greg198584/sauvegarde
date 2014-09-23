/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modulo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 19:00:46 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/01 19:13:06 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define MAX 100;

int main(void)
{
	char temp;
	int resultat;
	
	resultat = 0;
	printf("entrez un nombre :\n");
	scanf("%c", &temp);
	
	printf("le resultat est : %d\n", temp);
		return (0);
}
