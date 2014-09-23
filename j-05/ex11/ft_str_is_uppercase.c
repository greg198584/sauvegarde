/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 18:11:42 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 18:16:58 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alpha_maj(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int ft_str_is_uppercase(char *str)
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
		if (!(ft_alpha_maj(str[i])))
			return (0);
		i++;
	}
	return (1);
}
