/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 07:48:31 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/02 07:59:07 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	change_variable(int *pointeur)
{
	*pointeur = 42;
}

int main()
{
	int chiffre;
	int *pointeur;

	chiffre = 100;
	pointeur = &chiffre;
	
	printf("chiffre = %d \n", chiffre);
	printf("pointeur  = %d \n", *pointeur);
	
	printf("\nadresse chiffre  = %d \n", &chiffre);
	printf("adresse pointeur  = %d \n", &pointeur);

	printf("\npointeur contient  = %d \n", pointeur);
	
	change_variable(pointeur);
	printf("\nApres l'apelle de la fonction \n");
	printf("\nchiffre = %d \n", chiffre);
}
