/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 08:12:17 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/12 09:08:51 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

typedef int	ft_bool;

# define TRUE 1
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0

typedef struct	s_door
{
	int	state;
}				t_door;

#endif
