/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaillib <tcaillib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 16:09:36 by tcaillib          #+#    #+#             */
/*   Updated: 2014/09/14 22:45:13 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	colle(int x, int y);

int		main(int argc, char **argv)
{
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	colle(a, b);
	return (0);
}
