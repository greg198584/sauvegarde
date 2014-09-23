/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 15:11:57 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/04 22:38:09 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_print_argv(int argc, char **argv)
{
	int	i;
	int	a;

	i = 1;
	a = 0;
	while (i < argc)
	{
		while (argv[i][a])
		{
			ft_putchar(argv[i][a]);
			a++;
		}
		ft_putchar('\n');
		i++;
		a = 0;
	}
}

int		main(int argc, char **argv)
{
	char	*str_sort;
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (argv[j + 1] && i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[j + 1]) > 0)
		{
			str_sort = argv[i];
			argv[i] = argv[j + 1];
			argv[j + 1] = str_sort;
			i = 1;
			j = 1;
			continue ;
		}
		i++;
		j++;
	}
	ft_print_argv(argc, argv);
	return (0);
}
