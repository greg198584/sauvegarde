/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 22:43:24 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/13 23:01:14 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*s;

	s = dest;
	while (n > 0 && *src != '\0')
	{
		*s++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*s++ = '\0';
		--n;
	}
	return (dest);
}

char	*ft_strndup(char *s, unsigned int n)
{
	char *new = malloc(n+1);
	if (new)
	{
		ft_strncpy(new, s, n);
		new[n] = '\0';
	}
	return new;
}

