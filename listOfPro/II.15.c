#include<stdio.h>
//Sum of natural numbers
int main()
{
	int num, sum, i;
	printf("Enter number of element: "); scanf("%d", &num);
	for(i=0; i<=num; i++)
	{
		printf("%d + ", i);
		sum += i;
	}
	printf("\b\b= %d", sum);
	return 0;
}
