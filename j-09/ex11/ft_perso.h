/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 08:03:37 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/12 08:08:01 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PERSO_H
# define FT_PERSO_H

typedef struct	s_perso
{
	char		*name;
	double		life;
	int			age;
	char		*profession;
}				t_perso;

#endif
