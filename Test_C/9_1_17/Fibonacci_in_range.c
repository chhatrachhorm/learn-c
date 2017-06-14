//This program  is written by Chhorm Chhatra on 9/01/2017 to diplay Fibonacci series in a range
#include <stdio.h>
main ()
{
	int x, x1=0, x2=1, n;
/*	printf("Fibonacci Series \n");
	printf("Enter the first number: ");
	scanf("%d",&x1);
	printf("Enter the second number: ");
	scanf("%d", &x2); */
	printf("How many number of series do you want to display?\n");
	scanf("%d", &n);
	printf("Here you are: \n");
	printf("%d\t", x1);
	printf("%d\t", x2);
	while(n>0)
	{
		x = x1 + x2;
		printf("%d\t", x);
		x1 = x2;
		x2 = x;
		--n;
	}
}
