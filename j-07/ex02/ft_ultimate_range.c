/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 11:03:11 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/05 16:57:57 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	size_tab;

	size_tab = max - min;
	i = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(tab) * (max - min));
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (0);
}
