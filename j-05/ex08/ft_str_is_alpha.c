/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 13:28:39 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 17:59:06 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int size_str;

	i = 0;
	size_str = 0;
	while (str[size_str] != '\0')
		size_str++;
	if (size_str == 0)
		return (1);
	while (str[i])
	{
		if (!(ft_char(str[i])))
			return (0);
		i++;
	}
	return (1);
}
