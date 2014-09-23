/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 18:49:36 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/01 20:16:35 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char *argv[])
{
	int i;
	char *str = "123";

	i = ft_atoi(str);

	printf("la valeur est : %d\n", i);
	return (0);
	}
