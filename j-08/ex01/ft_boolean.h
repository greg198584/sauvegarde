/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 09:47:12 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/08 10:19:30 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int	t_bool;

# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN_MSG	"I have a pair number of arguments\n"
# define ODD_MSG	"I have an impair number of arguments\n"
# define EVEN(x) 	(!((x) % 2))

#endif
