/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 09:57:10 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 22:00:41 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// il vous suffit de decommenter la fonction que vous voulait envoyer 
// et modifier ces pararmetre
// il y a different variable et pointeur a utiliser selon vos besoin

#include <stdio.h>
#include <unistd.h>

#define MAX 20

/* PROTOTYPE */
void	ft_putnbr(int nbr);
void	ft_putchar(char c);

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strstr(char *str, char *to_find);
int ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strcmp(char *s1, char *s2);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int	ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

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
		
		char str1[] = "coucou tous le monde entier";
		char str2[] = "monde";
		char *str3 = ft_strstr(str1, str2);
		char str4[] = "";
		char str5[] = "";
		char str6[] = "";
		char str7[] = "";
		char str8[] = "";
	
		//char	*ft_strcpy(char *dest, char *src);
		//char	*ft_strncpy(char *dest, char *src, unsigned int n);
		
		//int ft_strncmp(char *s1, char *s2, unsigned int n);
		//int	ft_strcmp(char *s1, char *s2);
		//char *ft_strupcase(char *str);
		//char *ft_strlowcase(char *str);
		//char	*ft_strcapitalize(char *str);
		//int	ft_str_is_numeric(char *str);
		//int ft_str_is_lowercase(char *str);
		//int ft_str_is_uppercase(char *str);
		//int ft_str_is_printable(char *str);
		//char *ft_strcat(char *dest, char *src);
		//char *ft_strncat(char *dest, char *src, int nb);
		//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
		//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

		printf("Chaine source :\n%s\n\n", str1);
		printf("Chaine recherche ou chaine 2 :\n%s\n\n", str2);
		printf("Resultat strstr : %s\n", str3);

		//printf("%d\n", a);
		
		return (0);
}

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
