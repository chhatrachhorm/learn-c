//Reverse the value in array
//Program written by Chhorm Chhatra on 18/01/2017
#include<stdio.h>
main()
{
	float n[150];
	int i, j, tem, e;
	puts("Program to reverse the value of an array");
	puts("Enter number of elements: ");
	scanf("%d", &e);
	puts("Enter all the number: ");
	for(i=0; i<e; i++)
	{
		scanf("%f", &n[i]);
	}
/*	for(i=j-1; i>-1; i--)
	{
		printf("%.1f", n[i]);
		printf("\n");
	} */
	j = i-1;
	i = 0;
	while(i<j)
	{
		tem = n[i];
		n[i] = n[j];
		n[j] =  tem;
		i++;
		j--;
	}
	puts("Reverse: ");
	for(i=0; i<e; i++)
	{
		printf("%.1f", n[i]);
		printf("\n");
	}
}
