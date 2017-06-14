//Program to find the largest of n numbersf fo fan array of size5
//Program Written by Chhorm Chhatra on 18/01/2017
#include<stdio.h>
main()
{
	float n[5], largest;
	int i, j;
	puts("Program to find the largest number of the input");
	puts("Enter number of element: ");
	scanf("%d", &j);
	puts("Enter the five number: ");
	for( i = 0; i<j; i++)
	{
		scanf("%f", &n[i]);
	}
	largest = n[0];
	for(i=0; i<j; i++)
	{
		if(largest < n[i])
		{
			largest = n[i];
		}
	}
	printf("The largest number is %f", largest);
}

