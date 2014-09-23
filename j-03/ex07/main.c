/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 07:53:38 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/01 10:05:10 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrev(char *str);

int main (void)
{
	char str[]= "coucou tous le monde";
	char *str_ptr;
	str_ptr = str;

	printf("%s\n", ft_strrev(str_ptr));
	return (0);
}
