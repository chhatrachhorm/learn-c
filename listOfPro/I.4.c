#include<stdio.h>
//Swap value of two variables
int main()
{
	int a, b, c;
	printf("Enter a: "); scanf("%d", &a);
	printf("Enter b: "); scanf("%d", &b);
	c = a;
	a = b;
	b = c;
	printf("a: %d \n", a); 
	printf("b: %d ", b); 
		
	return 0;
}
