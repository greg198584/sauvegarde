/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 19:04:07 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 19:28:10 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	size_dest_str;

	i = 0;
	size_dest_str = 0;
	while (dest[size_dest_str])
		size_dest_str++;
	while (src[i])
	{
		if (i < size - 1)
			dest[size_dest_str] = src[i];
		size_dest_str++;
		i++;
	}
	dest[size_dest_str] = '\0';
	return (size_dest_str);
}
