/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 10:50:29 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/01 10:17:43 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size_str;
	char	temp;
	int		i;

	size_str = 0;
	i = 0;
	while (str[++size_str] != '\0')
		continue;
	size_str--;
	while (i < size_str)
	{
		temp = str[size_str];
		str[size_str] = str[i];
		str[i] = temp;
		i++;
		size_str--;
	}
	return (str);
}
