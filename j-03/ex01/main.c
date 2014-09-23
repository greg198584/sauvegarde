#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
		int a = 6;
		printf("%d\n", a);
		int *ptr1;
		int **ptr2;
		int ***ptr3;
		int ****ptr4;
		int *****ptr5;
		int ******ptr6;
		int *******ptr7;
		int ********ptr8;
		int *********ptr9;
		
		ptr1 = &a;
		ptr2 = &ptr1;
		ptr3 = &ptr2;
		ptr4 = &ptr3;
		ptr5 = &ptr4;
		ptr6 = &ptr5;
		ptr7 = &ptr6;
		ptr8 = &ptr7;
		ptr9 = &ptr8;
	
	ft_ultimate_ft(ptr9);
	printf("%d\n", a);
}
