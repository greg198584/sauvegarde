/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 11:15:40 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 11:10:38 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	resultat;
	int	i;

	resultat = 0;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		resultat = 1;
	while (i < nb)
	{
		resultat = i * nb;
		nb--;
	}
	return (resultat);
}
