/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 08:40:31 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/06 09:35:33 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(void)
{
	int	nbr;

	nbr = '0';
	while (nbr <= '9')
	{
		ft_putchar(nbr);
		ft_putchar('\n');
		nbr++;
	}
}

int	main()
{
	ft_print_number();
}

