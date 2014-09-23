/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 18:39:05 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/12 16:41:29 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int number;
	int negative;

	i = 0....

	while ((str[i] == ' ') || \n \v \r \f \t)
		i++;
	if (str[i] == '-')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++
	}
	if 
}

void	ft_putnbr(char c)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10)
	}
}

void ft_putstr(char *str)
{
	int	i;

	i=0;
	while(str[i])
		ft_putchar[i++];
}
