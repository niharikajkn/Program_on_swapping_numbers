#include <stdio.h>
int main()
{
	int a,b;
	//* The numbers to be swapped is to be entered *//
	printf("Enter first no :");
	scanf("%d",&a);
	printf("Enter second no:");
	scanf("%d",&b);
	printf("Numbers before swapping  : %d  %d",a,b);
	//* Swapping steps *//
	a=a+b;
	b=a-b;
	a=a-b;
	//* Displaying swapped values *//
	
	printf("\nNumbers after swapping   : %d  %d",a,b);
	return 0;
}
