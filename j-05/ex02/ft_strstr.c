/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 17:02:00 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 09:08:45 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int count;
	int	size_to_find;

	i = 0;
	count = 0;
	size_to_find = 0;
	while (to_find[size_to_find])
		size_to_find++;
	if (size_to_find == 0)
		return (str);
	while (str[i])
	{
		while (to_find[count] == str[i + count])
		{
			if (count == size_to_find - 1)
				return (str + i);
			count++;
		}
		count = 0;
		i++;
	}
	return (0);
}
