/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 18:28:12 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/17 18:46:23 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

char *ft_strrev(char *str)
{
	char *str2;

	int i;
	int j;
	int tmp;

	i = 0;
	j = ft_strlen(str);
	tmp = j;
	while (i < tmp)
		str2[i++] = str[j--];
	str2[i] = '\0';

	return (str2);
}

char	*ft_strrev(char *str);

int main (void)
{
	char str[]= "coucou tous le monde";
	char *str_ptr;
	str_ptr = str;

	printf("%s\n", ft_strrev(str_ptr));
	return (0);
}
