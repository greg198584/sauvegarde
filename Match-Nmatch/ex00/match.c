/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 16:38:16 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/07 13:56:00 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_str(char *s1, char *s2)
{
	int	i;
	int	b;
	int	count;

	i = 0;
	b = 0;
	count = 0;
	while (s2[i])
	{
		while (s2[b] == '*')
			b++;
		if (s2[b] == s1[i])
		{
			i++;
			b++;
			count++;
		}
		else if (s2[b - 1] == s1[i - 1] && s2[b] != s1[i])
			return (0);
		else
			i++;
	}
	return (count);
}

int	match(char *s1, char *s2)
{
	if (ft_strlen(s2) > ft_strlen(s1))
	{
		if (s2[ft_strlen(s2 - 1)] == '*' && check_str(s1, s2) > 1)
			return (1);
		else
			return (0);
	}
	else
	{
		if (check_str(s1, s2) > 0)
			return (1);
		else
			return (0);
	}
}
