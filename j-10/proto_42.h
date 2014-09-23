/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto_42.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 08:16:28 by glafitte          #+#    #+#             */
/*   Updated: 2014/09/08 09:15:36 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PROTO_42_H
# define PROTO_42_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		size_params(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *bi);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_printf_beta(char *str, int *nbr);
int		ft_atoi(char *str);
// prototype j04 

int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
int		ft_eight_queens_puzzle(void);
void	ft_eight_queens_puzzle_2(void);

// prototype j05
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strstr(char *str, char *to_find);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

// prototype j07
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		*ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);

#endif
