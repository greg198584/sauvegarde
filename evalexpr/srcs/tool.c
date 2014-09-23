/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 21:21:53 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/13 21:22:02 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char const *nbr)
{
	int		i;
	int		n;
	int		neg;

	if ((char)*nbr == '\0')
		return (0);
	n = 0;
	i = 0;
	neg = 1;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	if (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			neg = -1;
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		n *= 10;
		n += nbr[i] - 48;
		i++;
	}
	return (n * neg);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(48 + n);
}

void	ft_usage(int a, int b)
{
	a = b;
	b = a;
	ft_putstr("error : only [ - + * / % ] are accepted.\n");
}
