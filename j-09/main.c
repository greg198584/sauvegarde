#include <stdio.h>

void	ft_take_place(int hour);
void	ft_generic(void);

int	main(void)
{
	int	i;

	i = 0;
	while (i < 25)
	{
		ft_take_place(i);
		i++;
	}
}
