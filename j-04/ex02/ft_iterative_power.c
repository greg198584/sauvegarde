/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 12:24:33 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/01 12:41:05 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;
	int	i;

	resultat = 0;
	i = 0;
	if (nb <= 0)
		return (0);
	resultat = nb;
	while (i < power - 1)
	{
		resultat = resultat * nb;
		i++;
	}
	return (resultat);
}
