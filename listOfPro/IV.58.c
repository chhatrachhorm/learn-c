#include<stdio.h>
int sum(int a);
int main()
{
	int num;
	printf("Enter the number of sequence of the natural number: ");
	scanf("%d", &num);
	printf("Sum = %d", sum(num));
	return 0;
}
int sum(int a)
{
	if(a>0)
	return a + sum(a-1);
	else 
	return 0;
}
