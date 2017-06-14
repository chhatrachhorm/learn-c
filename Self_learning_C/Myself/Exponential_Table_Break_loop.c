//Program to practice break loop earlier construct
//Program to let users limit how many times the loop should be looped
//Written by  Chhorm CHhatra on 12/01/2017
#include <stdio.h>
#include <math.h>
#include "mymath.h"
main ()
{
	long int t, ans, i, j, k;
	printf("Program to display a exponent table\n");
	printf("How many exponent table to do you want to have?\n");
	scanf("%ld", &t);
	for (i=1; i<=10; i++)
	{
		for(j=0; j<10; j++)
		{
			printf("*");
		}
		printf("\n");
		for(k=1; k<=10; k++)
		{
			ans = pow( i, k);
			printf("*\t %ld ^ %ld = %ld\n", i, k, ans);
			
		}
		for(j=0; j<10; j++)
		{
			printf("*");
		}
		if (t == i)break;
	}
	
}
