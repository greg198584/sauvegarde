/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaillib <tcaillib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 16:09:36 by tcaillib          #+#    #+#             */
/*   Updated: 2014/09/03 15:58:00 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_first_and_last_line(int x, int nb_line, int y);
void	ft_putchar(char c);

int		ft_fonction_for_line(int y)
{
	if (y == 1)
		return (1);
	else
		return (2);
}

void	ft_put_space(int x)
{
	if (x > 0)
		ft_putchar('\n');
}

void	colle(int x, int y)
{
	int	nb_line;
	int	count;
	//nb_line = 0;
	nb_line = ft_fonction_for_line(y);
	count = 1;
	while (nb_line == y)
	{
		if (nb_line <= 2 || nb_line == y)
			ft_first_and_last_line(x, nb_line, y);
		if (nb_line == 2) /* pour gerer 2 ligne */
		{
			ft_putchar('\n');
			ft_first_and_last_line(x, nb_line, y);
			ft_putchar('\n');
			break;
		}
		else
			count = 1;
		while (count <= x)
		{
			if ((count == 1 || count == x) && nb_line != 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			count++;
		}
		if (nb_line == 2)
		{
			ft_first_and_last_line(x, nb_line, y);
			break;
		}
				ft_put_space(x);
		nb_line++;
	}
}

void	ft_first_colum(int nb_line, int y)
{
	ft_putchar('A');
	if (nb_line < y)
		ft_putchar('\n');
}

void	ft_first_and_last_line(int x, int nb_line, int y)
{
	int	count;

	count = 1;
	if (x == 1)
		ft_first_colum(nb_line, y);
	while (count < x)
	{
		if (count == 1)
			ft_putchar('A');
		count++;
		if ((count >= 2) && (count <= (x - 1)))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
			if (nb_line < y)
				ft_putchar('\n');
		}
	}
}
