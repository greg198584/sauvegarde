/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 11:50:50 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/01 18:12:43 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int resultat;

	resultat = 0;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		resultat = 1;
	else
	{
		resultat = nb * ft_recursive_factorial(nb - 1);
	}
	return (resultat);
}
