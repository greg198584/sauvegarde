/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 09:57:10 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/02 12:39:43 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// il vous suffit de decommenter la fonction que vous voulait envoyer 
// et modifier ces pararmetre

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
int main(void)
{
		int a = 10;
		int b = 0;
		int *ptr1;
		int *ptr_1;
		int **ptr2;
		int ***ptr3;
		int ****ptr4;
		int *****ptr5;
		int ******ptr6;
		int *******ptr7;
		int ********ptr8;
		int *********ptr9;
		
		int resultat;
		char *str = "coucou tous le monde";
		int tab[7] = { 2, 5, 3, 9, 4, 5, 7};

		ptr1 = &a;
		ptr_1 = &b;
		ptr2 = &ptr1;
		ptr3 = &ptr2;
		ptr4 = &ptr3;
		ptr5 = &ptr4;
		ptr6 = &ptr5;
		ptr7 = &ptr6;
		ptr8 = &ptr7;
		ptr9 = &ptr8;

		//ft_ft(int *nbr);
		//ft_ultimate_ft(int *********nbr);
		//ft_div_mod(int a, int b, int *div, int *mod);
		ft_ultimate_div_mod(ptr1, ptr_1);
		//ft_putstr(char *str);
		//ft_putstr(char *str);
		//ft_swap(int *a, int *b);
		//ft_strrev(char *str);
		//ft_atoi(char *str);
		//ft_sort_integer_table(int *tab, int size);
		printf("%d , %d\n",a, b);
		return (0);
}
