/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 18:42:59 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/01 20:21:39 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_count(char *str, int max, int count, int result)
{
	int i;

	i =  0;
		while(count <= max || str[i] != '\0' )
 	{
		if (str[i] == count)
		{
			result += i;
			i++;
		}
		if (str[i] == '\0')
			i++;
		count++;
	}
  return (result);
}
int	ft_atoi(char *str)
{
	int	count;
	int max;
	int result;

	result = 0;
	max = 57;
	count = 48;

	result = ft_count(str, max, count, result);
	return(result);
}


