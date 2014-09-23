/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 22:19:06 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/12 15:22:40 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rot_maj(char c)
{
	c = c - 65;
	c = ((c + 42) % 26);
	c = c + 65;
	return (c);
}

char	rot_min(char c)
{
	c = c - 97;
	c = ((c + 42) % 26);
	c = c + 97;
	return (c);
}

char	rot(char c)
{
	if (c >= 65 && c <= 90)
		return (rot_maj(c));
	else if (c >= 97 && c <= 122)
		return (rot_min(c));
	else
		return (c);
}

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = rot(str[i]);
		i++;
	}
	return (str);
}
