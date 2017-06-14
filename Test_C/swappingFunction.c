#include<stdio.h>
int swap(int x, int y);
void main()
{
	int a=100, b=200;
	printf("Before swaping, a = %d", a);
	printf("\nBefore swaping, b = %d", b);
	swap(a, b);
	printf("\nAfter swaping, a = %d", a);
	printf("\nAfter swaping, b = %d", b);	
}
int swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return;
}
