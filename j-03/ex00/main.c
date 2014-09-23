#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char *argv[])
{
	int number;
	int *number_ptr;

	number_ptr = &number;

	ft_ft(number_ptr);
	printf("%d", number);
}
