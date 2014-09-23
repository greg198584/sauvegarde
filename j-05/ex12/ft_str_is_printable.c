/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 18:19:10 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/03 18:35:07 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_char(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int ft_str_is_printable(char *str)
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
		if (!(ft_print_char(str[i])))
			return (0);
		i++;
	}
	return (1);
}
