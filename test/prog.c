#include <stdio.h>
#include "prototype.h"

int main()
{
	int nb1, nb2;
	int resultat;

	printf("rentrer deux nombres :\n");
	scanf("%d %d", &nb1, &nb2);

	resultat = som_nb(nb1, nb2);
	printf("le resultat est : %d \n", resultat);

}


int som_nb(int a, int b)
{
	int total;

	total = a + b;
	return total;
}


