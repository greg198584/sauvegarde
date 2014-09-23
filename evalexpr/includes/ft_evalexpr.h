/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evalexpr.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 21:10:47 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/13 23:04:20 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVALEXPR_H
# define FT_EVALEXPR_H

typedef struct	s_opp
{
	char	op[1];
	void	(*ft_op)(int, int);
}				t_opp;

typedef struct	s_doop
{
	int		a;
	int		b;
	char	op[1];
}				t_doop;

void		ft_sub(int a, int b);
void		ft_add(int a, int b);
void		ft_div(int a, int b);
void		ft_mod(int a, int b);
void		ft_mul(int a, int b);
void		ft_usage(int a, int b);
int			ft_atoi(char *str);
void		ft_putnbr(int nbr);
void		ft_putchar(char c);
void		ft_putstr(char *s);
int			ft_strlen(char *str);
int			eval_expr(char *str);
int			ft_get_paranthese_pos_c(char *str);
int			ft_get_parenthese_pos_o(char *str);
char		*ft_get_paranthese(char *str);
char		*ft_strndup(char *s, unsigned int n);

#endif
