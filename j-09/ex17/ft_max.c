/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 13:03:32 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/12 13:16:00 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_max(int *tab, int length)
{
	int	i;
	int	count;

	i = 0;
	count = tab[i];
	while (i < length)
	{
		if (tab[i] > count)
			count = tab[i];
		i++;
	}
	return (count);
}
