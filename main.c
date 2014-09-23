/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 09:57:10 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/02 15:52:02 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// il vous suffit de decommenter la fonction que vous voulait envoyer 
// et modifier ces pararmetre
// il y a different variable et pointeur a utiliser selon vos besoin

#include <stdio.h>
#include <unistd.h>

#define MAX 20

void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
void ft_putstr(char *str);
void ft_swap(int *a, int *b);
char *ft_strrev(char *str);
int ft_atoi(char *str);
void ft_sort_integer_table(int *tab, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	int	tmp;
	int	chiffre;
	int	size;

	if (nbr < 0) /*Premierement on verifie si le nombre est negatif*/
	{
		ft_putchar('-'); /*On affiche le signe '-' */
		nbr = nbr * -1; /*On transforme le nombre en nombre positif... c'est plus simple :)*/
	}

	tmp = nbr; /* On copie le nombre passe en param pour garder l'original */
	size = 1; /* Un int c'est au minimum un chiffre !*/
	while (tmp / 10 > 0) /*Tant qu'on peut diviser le nombre par 10...*/
	{
		size = size * 10; /*On augmente sa taille (en terme de dixaines)*/
		tmp = tmp / 10;
	}

	while (size > 0) /* Tant qu'il reste des chiffre a afficher...*/
	{
		chiffre = 0; /*On (re)met chiffre a 0*/
		chiffre = nbr / size; /* On recupere le chiffre qui est le plus a gauche.*/
		ft_putchar('0' + chiffre); /* On l'affiche avec le bon code ascii */
		nbr = nbr % size; /* On reduit le nombre (ex: 1337 % 1000 -> 337 ; 337 % 100 -> 37 ; 37 % 10 -> 7) */
		size = size / 10; /* On decremente la taille du nombre car on l'a reduit */
	}
}

int main(void)
{
		int resultat = 0;
		
		int a = 6;
		int b = 0;
		int c = 0;
		int d = 0;

		int *ptr_b;
		int *ptr_c;
		int *ptr_d;
			
		int *ptr1;
		int **ptr2;
		int ***ptr3;
		int ****ptr4;
		int *****ptr5;
		int ******ptr6;
		int *******ptr7;
		int ********ptr8;
		int *********ptr9;
		
		char *str = "coucou tous le monde";
		int tab[7] = { 2, 5, 3, 9, 4, 5, 7};

		ptr1 = &a;
		ptr2 = &ptr1;
		ptr3 = &ptr2;
		ptr4 = &ptr3;
		ptr5 = &ptr4;
		ptr6 = &ptr5;
		ptr7 = &ptr6;
		ptr8 = &ptr7;
		ptr9 = &ptr8;

		ptr_b = &b;
		ptr_c = &c;
		ptr_d = &d;
		//ft_ft(int *nbr);
		//ft_ultimate_ft(int *********nbr);
		//ft_div_mod(int a, int b, int *div, int *mod);
		//ft_ultimate_div_mod(int *a, int *b);
		//ft_putstr(char *str);
		//ft_putstr(char *str);
		//ft_swap(int *a, int *b);
		//ft_strrev(char *str);
		//ft_atoi(char *str);
		//ft_sort_integer_table(int *tab, int size);
		printf("%d\n", a);
		return (0);
}
