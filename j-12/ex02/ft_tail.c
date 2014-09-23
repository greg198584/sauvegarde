/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 12:46:22 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/11 19:01:05 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>

int		ft_atoi(char *str);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(2, &str[i++], 1);
}

void	ft_tail_name(int i, int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc > 4)
	{
		if (i > 3)
			write(1, "\n===>", 4);
		else
			write(1, "==>", 4);
		while (argv[i][j])
		{
			write(1, &argv[i][j], i);
			j++;
		}
		write(1, " <==\n", 5);
	}
}

int		ft_tail_size(int i, char **argv)
{
	char	buffer;
	int		fd2;
	int		size;

	size = 0;
	fd2 = open(argv[i], O_RDONLY);
	while (read(fd2, &buffer, 1))
		size++;
	close(fd2);
	return (size);
}

void	ft_tail_files(int i, int fd, int argc, char **argv)
{
	char	buffer;
	int		offset;
	int		ft_read;
	int		size_file;

	size_file = ft_tail_size(i, argv);
	ft_read = 0;
	offset = ft_atoi(argv[2]);
	ft_tail_name(i, argc, argv);
	if (argv[2][0] == 'c')
	{
		while (ft_read != offset - 1)
			ft_read += read(fd, &buffer, 1);
		while (read(fd, &buffer, 1))
			write (1, &buffer, 1);
	}
	else
	{
		while (ft_read < (size_file - offset))
			ft_read += read(fd, &buffer, 1);
		while (read(fd, &buffer, 1))
			write (1, &buffer, 1);
	}
}

int		main(int argc, char **argv)
{
	int	fd;
	int	i;
	int	j;

	i = 3;
	if (argc < 4)
		return (0);
	while (i < argc)
	{
		j = 1;
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
			ft_tail_files(i, fd, argc, argv);
		else
		{
			write(2, "ft_tail: ", 9);
			while (argv[i][++j])
				write (2, &argv[i][j], 1);
			write(2, ": No such file or directory\n", 28);
		}
		close(fd);
		i++;
	}
	return (0);
}
