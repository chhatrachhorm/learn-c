#include<stdio.h>
//Factors of a number
int main()
{
	int i, a[100], num, j;
	puts("Enter a number: ");
	scanf("%d", &num);
	for(i=1, j=0; i<=num; i++)
	{
		if(num%i==0)
		{
			*(a+j)=i; j++;
		}
	}
	printf("Factors of %d is: \n", num);
	for(i=0; i<j; i++)
	{
		printf("%d, ", *(a+i));
	}printf("\n");
	for(i=0; i<j; i++)
	{
		printf("%d ", -(*(a+i)));
	}
	return 0;
}
