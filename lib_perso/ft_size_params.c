/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 15:25:48 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/04 16:43:41 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_size_params(int argc, char **argv)
{
	int	size_argv;
	int i;
	int b;

	i = 1;
	b = 0;
	size_argv = 0;
	while (i < argc)
	{
		while (argv[i][b])
		{
			b++;
			size_argv++;
		}
		size_argv++;
		b = 0;
		i++;
	}
	return (size_argv);
}
