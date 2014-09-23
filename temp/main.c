#include <stdio.h>
#include <stdlib.h>

int	calculette(int a, int b)
{
	int resultat;

	resultat = a + b;
	return (resultat);
}

int main(void)
{

	int letter = 'A' ;
	while (letter <= 'Z')
	{
		printf("%c", letter);
		letter++;
	}
	printf("\n");
}
