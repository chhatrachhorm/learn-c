#include<stdio.h>
int powe(int a, int b);
int main()
{
	int n, m;
	printf("Enter the base: ");scanf("%d", &n);
	printf("Enter the power: "); scanf("%d", &m);
	printf("%d^%d = %d", n, m, powe(n, m));
	
	return 0;
}
int powe(int a, int b)
{
	if(b>0)
	return a * powe(a, b-1);
	else return 1;
}
