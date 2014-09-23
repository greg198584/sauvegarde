/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_beta.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 17:01:31 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/14 13:24:18 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	ft_printf_beta(char *str, int *nbr)
{
	ft_putstr(str);
	ft_putchar(' ');
	ft_putnbr(*nbr);
	ft_putchar('\n');
}
