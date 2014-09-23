/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 16:55:45 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 17:56:28 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_num(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	size_str;

	i = 0;
	size_str = 0;
	while (str[size_str] != '\0')
		size_str++;
	if (size_str == 0)
		return (1);
	while (str[i])
	{
		if (!(ft_num(str[i])))
			return (0);
		i++;
	}
	return (1);
}
