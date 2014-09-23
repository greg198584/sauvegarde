/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evalexpr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 21:38:30 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/13 23:07:28 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_evalexpr.h>
#include <stdlib.h>

char	*ft_get_paranthese(char *str)
{
	char	*substr;
	int 	n;

	n = get_parenthese_pos_o(str);
	substr = ft_strndup(str + n, get_paranthese_pos_c(str) - n);
	return (substr);
}

int		ft_get_parenthese_pos_o(char *str)
{
	int	position[2];
	int	count;
	int	i;

	i = -1;
	count = 0;
	position[0] = 0;
	position[1] = 0;
	while (str[++i] != '\0')
	{
		count = count + ((str[i] == '(') - (str[i] == ')'));
		if (count > position[0])
		{
			position[0] = count;
			position[1] = i;
		}
	}
	return (position[1]);
}

int		ft_get_paranthese_pos_c(char *str)
{
	int	i;

	i = get_parenthese_pos_o(str) - 1;
	while (str[++i] != '\0')
		if (str[i] == ')')
			return (++i);
	return (0);
}

int	eval_expr(char *str)
{
	int		size;
	int		result;
	int		i;
	char	*new;
	
	new = ft_get_paranthese(str);
	size = ft_strlen(str);
	while (i < size)
	{

	}
	return (result);
}
