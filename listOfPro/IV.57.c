#include<stdio.h>
void fibo(int a, int b, int c);
//Fibonacci using recursive function
int main()
{
	int a, b, c;
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);
	printf("Enter number of sequence: ");scanf("%d", &c);
	printf("%d\t%d\t", a, b);
	fibo(a, b, c);

}
void fibo(int a, int b, int c)
{
	if(c>0)
	{
		int d=0;
		d = a + b;
		printf("%d\t", d);
		a = b; b = d;
		fibo(a, b, c-1);
	}
}
