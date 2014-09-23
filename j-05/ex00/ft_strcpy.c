/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 12:21:00 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 12:33:28 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	size_str;
	int	size_str_dest;
	int	count;

	count = 0;
	size_str = 0;
	size_str_dest = 0;
	while (src[size_str] != '\0')
		size_str++;
	while (dest[size_str_dest] != '\0')
		size_str_dest++;
	if (size_str < size_str_dest)
		size_str = size_str_dest;
	while (count < size_str)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
