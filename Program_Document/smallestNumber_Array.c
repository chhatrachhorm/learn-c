//Program to find the smallest of n numbers by using array of size5
//Program Written by Chhorm Chhatra on 18/01/2017
#include<stdio.h>
main()
{
	float n[155], smallest;
	int i, j;
	puts("Program to find the smallest number of the five input");
	puts("Enter number of element: ");
	scanf("%d", &j);
	puts("Enter the all numbers: ");
	for( i = 0; i<j; i++)
	{
		scanf("%f", &n[i]);
	}
	smallest = n[0];
	for(i=0; i<j; i++)
	{
		if(smallest > n[i])
		{
			smallest = n[i];
		}
	}
	printf("The smallest number is %f", smallest);
}

