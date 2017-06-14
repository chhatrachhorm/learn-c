#include<stdio.h>
//Fibonacci using array
int main()
{
	int i, num, a[100], limit=0;
	puts("Fibonacci");
	printf("Enter the first element: ");scanf("%d", a);
	printf("Enter the second element: ");scanf("%d", a+1);
	puts("How many element do you want to see?");
	scanf("%d", &limit);
	for(i=0; i<limit; i++)
	{
		*(a+i+2)= *(a+i) + *(a+i+1);
	}
	for(i=0; i<limit; i++)
	{
		printf("%d\t", *(a+i));
	}
	return 0;
}
