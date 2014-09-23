/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 09:30:47 by igomez            #+#    #+#             */
/*   Updated: 2014/09/17 13:16:36 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

int		ft_atoi(char *str)
{
	int		i;
	int		total;

	if (*str == '-')
		return (0);
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	total = 0;
	while (str[i] >= '0' && str[i] <= '9')
		total = total * 10 + ((int)str[i++] - '0');
	return (total);
}
