/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 18:01:17 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 18:09:44 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alpha_min(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int ft_str_is_lowercase(char *str)
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
		if (!(ft_alpha_min(str[i])))
			return (0);
		i++;
	}
	return (1);
}
