/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 15:50:46 by igomez            #+#    #+#             */
/*   Updated: 2014/09/18 16:29:51 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

int		ft_solve(int fd)
{
	t_dlist	*list;
	t_param *prm;

	prm = NULL;
	prm = init_param(fd);
	if (prm == NULL)
		return (0);
	list = NULL;
	list = init_map(list, prm, fd);
	if (list != NULL && prm != NULL && !prm->error)
	{
		engine(list, prm);
		dlist_print_map(list);
	}
	else
		ft_putstr("map error\n");
	if (prm != NULL)
		free(prm);
	if (list != NULL)
		dlist_clear(list);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;

	fd = 0;
	if (argc < 2)
		return (ft_solve(fd));
	i = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd > 0)
		{
			ft_solve(fd);
			close(fd);
		}
	}
	return (0);
}
