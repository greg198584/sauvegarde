#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(void)
{
	int nb;
	int resultat;
	
	printf("rentrer une valeur nb :\n");
	scanf("%d", &nb);
	resultat = ft_sqrt(nb);
	printf("%d\n", resultat);
	return (0);
}
