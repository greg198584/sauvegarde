#include <stdio.h>
#include <unistd.h>

int ft_recursiv_power(int nb, int power);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(void)
{
	int i;
	int nb;
	int resultat;
	
	printf("rentrer une valeur nb et power\n");
	scanf("%d%d", &nb ,&i);
	resultat = ft_recursiv_power(nb, i);
	printf("%d\n", resultat);
	return (0);
}
