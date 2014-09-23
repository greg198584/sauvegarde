/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 18:54:13 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 18:56:26 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (dest[size])
		size++;
	while (i < nb)
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
