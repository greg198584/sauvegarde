/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 17:59:13 by igomez            #+#    #+#             */
/*   Updated: 2014/09/18 16:41:08 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_param		*init_param(int fd)
{
	t_param	*p;
	char	str[17];
	char	buff;
	int		rd;
	int		i;

	i = 0;
	if ((p = malloc(sizeof(t_param))) == NULL)
		return (NULL);
	while ((rd = read(fd, &buff, 1)) > 0 && i < 16)
	{
		if (buff == '\n')
			break ;
		str[i++] = buff;
		str[i] = '\0';
	}
	p->error = 0;
	p->full = str[--i];
	p->obs = str[--i];
	p->empty = str[--i];
	str[i] = '\0';
	p->nb_line = ft_atoi(str);
	return (p);
}
