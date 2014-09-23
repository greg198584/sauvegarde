/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/23 16:11:30 by hamza             #+#    #+#             */
/*   Updated: 2014/09/23 16:25:08 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto_42.h"

void	ft_flag(const char *fmt, int i, va_list ap)
{
  if (fmt[i] == 'd')
    ft_putnbr(va_arg(ap, int));
  else if (fmt[i] == 'c')
    ft_putchar(va_arg(ap, int));
  else if (fmt[i] == 's')
    ft_putstr(va_arg(ap, char *));
  else
    ft_putchar(fmt[i]);
}

int	ft_printf(const char *fmt, ...)
{
	va_list ap;
	int	i;

	i = 0;
	va_start(ap, fmt);
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			ft_flag(fmt, i, ap);
		}
		else
		ft_putchar(fmt[i]);
		i++;
	}
	va_end(ap);
	return (0);
}
