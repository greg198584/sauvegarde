/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursiv_power.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 12:48:14 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/01 13:24:33 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursiv_power(int nb, int power)
{
	if (nb <= 0 || power <= 0)
		return (0);
	if (power == 1)
		return (nb);
	else
		return ((nb * ft_recursiv_power(nb, power - 1)));
}
