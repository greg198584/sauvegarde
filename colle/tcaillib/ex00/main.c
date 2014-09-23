/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaillib <tcaillib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 16:09:36 by tcaillib          #+#    #+#             */
/*   Updated: 2014/09/14 10:10:51 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	colle(int x, int y);
int		ft_atoi(char *str);

int		main(int argc , char **argv)
{
	int a;
	int b;
	
	if (argc < 2)
	{
		write(1, "erreur\n", 7);
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
	colle(a, b);
	return (0);
}
