/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_colle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 16:56:44 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/14 23:26:03 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle2.h"

int	ft_find_colle00(char buffer)
{
	if(buffer == 'o' || buffer == '|' || buffer == '-')
		return (-1);
	else
		return (0);
}

int	ft_find_colle01(char buffer)
{
	if (buffer == '*' || buffer == '/' || buffer == '\\')
		return (-1);
	return (1);
}
int	ft_find_colle02(char buffer)
{
	if (buffer == 'A' || buffer == 'B' || buffer == 'C' || buffer == ' ')
		return (-1);
	return (2);
}
int	ft_find_colle03(char buffer)
{
	if (buffer == 'A' || buffer == 'B' || buffer == 'C' || buffer == ' ')
 		return (-1);
	return (3);
}
int	ft_find_colle04(char buffer)
{
	if (buffer == 'A' || buffer == 'B' || buffer == 'C' || buffer == ' ')
		return (1);
	return (4);
}
