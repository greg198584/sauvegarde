/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez <igomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 16:51:07 by igomez            #+#    #+#             */
/*   Updated: 2014/09/16 09:47:28 by igomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include "ft_dlist.h"

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	dlist_print_debug(t_dlist *list);
void	dlist_print_map(t_dlist *list);

#endif
