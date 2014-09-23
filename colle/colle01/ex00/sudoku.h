#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		c_row(int nb, int **map, int i);
int		c_col(int nb, int **map, int j);
int		c_sqr(int nb, int **map, int i, int j);
int		fill_in(int **map, int location, int nb);
int		change_type(char map);
int		**creat_int_map(char **av);
void	ft_print_map(int **map);
