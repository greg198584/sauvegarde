/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/28 19:12:31 by glafitte          #+#    #+#             */
/*   Updated: 2014/08/29 15:13:33 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb_second(char nb1, char nb2, char nb3)
{
	if (nb1 < nb2 && nb2 < nb3)
	{
		ft_putchar(nb1);
		ft_putchar(nb2);
		ft_putchar(nb3);
		if (nb1 != '7' || nb2 != '8' || nb3 != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	num_0;
	char	num_1;
	char	num_2;

	num_0 = '0';
	while (num_0 <= '9')
	{
		num_1 = '0';
		while (num_1 <= '9')
		{
			num_2 = '0';
			while (num_2 <= '9')
			{
				ft_print_comb_second(num_0, num_1, num_2);
				num_2++;
			}
			num_1++;
		}
		num_0++;
	}
}
