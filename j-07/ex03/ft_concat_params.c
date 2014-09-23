/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 11:57:12 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/05 23:02:01 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size_params(int argc, char **argv)
{
	int	size_argv;
	int	i;
	int	b;

	i = 1;
	b = 0;
	size_argv = 0;
	while (i < argc)
	{
		while (argv[i][b])
			b++;
		size_argv += b;
		b = 0;
		i++;
	}
	return (size_argv);
}

void	ft_print_str(int argc, char **argv, char *str, int size_argv)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 1;
	x = 0;
	while (i < size_argv)
	{
		while (j < argc)
		{
			while (argv[j][x])
			{
				str[i] = argv[j][x];
				x++;
				i++;
			}
			str[i] = '\n';
			i++;
			j++;
			x = 0;
		}
	}
	str[i] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		size_argv;

	size_argv = ft_size_params(argc, argv);
	str = (char*)malloc(sizeof(*str) * (size_argv + argc - 1));
	ft_print_str(argc, argv, str, size_argv);
	return (str);
}
