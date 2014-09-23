/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/29 16:31:27 by glafitte          #+#    #+#             */
/*   Updated: 2014/08/29 16:47:55 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2_putchar(char nb1, char nb2)
{
	ft_putchar(((nb1 - (nb1 % 10)) / 10) + 48);
	ft_putchar((nb1 % 10) + 48);
	ft_putchar(' ');
	ft_putchar(((nb2 - (nb2 % 10)) / 10) + 48);
	ft_putchar((nb2 % 10) + 48);
	if (nb1 != 98 || nb2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char i;
	char j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_print_comb2_putchar(i, j);
			j++;
		}
		i++;
	}
}
