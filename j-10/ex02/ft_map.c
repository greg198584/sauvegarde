/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 08:28:57 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/09 16:53:16 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*tab_2;

	i = 0;
	tab_2 = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		tab_2[i] = f(tab[i]);
		i++;
	}
	return (tab_2);
}
