/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 09:57:10 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/02 11:17:56 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// il vous suffit de decommenter la fonction que vous voulait envoyer 
// et modifier ces pararmetre

#include <stdio.h>
#include <unistd.h>

#define MAX 20
int	ft_recursive_factorial(int nb);
int	ft_iterative_power(int nb, int power);
int	ft_iterative_power(int nb, int power);
int	ft_recursive_power(int nb, int power);
int	ft_fibonacci(int index);
int	ft_sqrt(int nb);
int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);
int	ft_eight_queens_puzzle(void);
void ft_eight_queens_puzzle_2(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(void)
{
		int a = 6;
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
		
		//ft_recursive_factorial(int nb);
		//ft_iterative_power(int nb, int power);
		//int	ft_iterative_power(int nb, int power);
		//int	ft_recursive_power(int nb, int power);
		//int	ft_fibonacci(int index);
		//int	ft_sqrt(int nb);
		//int	ft_is_prime(int nb);
		//int	ft_find_next_prime(int nb);
		//int	ft_eight_queens_puzzle(void);
		//void ft_eight_queens_puzzle_2(void);
		printf("%d\n", a);
		return (0);
}
