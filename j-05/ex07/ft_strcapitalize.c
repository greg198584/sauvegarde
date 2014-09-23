/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 11:12:33 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 13:27:27 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alpha_char(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '1') && (c <= '9'))
		return (1);
	return (0);
}

int		ft_char_min(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int		ft_char_maj(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	count_word;

	i = 0;
	count_word = 0;
	while (str[i])
	{
		if ((ft_char_min(str[i])) && (count_word == 0))
			str[i] = str[i] - 32;
		else if ((ft_char_maj(str[i])) && (count_word == 1))
			str[i] = str[i] + 32;
		if (!(ft_alpha_char(str[i])))
			count_word = 0;
		else
			count_word = 1;
		i++;
	}
	return (str);
}
