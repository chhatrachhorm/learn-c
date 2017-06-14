//Program to practice do-while loop construct
//Program to add the given numbers untill users input zero
//Written by  Chhorm CHhatra on 12/01/2017
#include <stdio.h>
#include <math.h>
#include "mymath.h"
main ()
{
	float num, sum=0;
	printf ("Program to add the given numbers until users input zero\n");
	do
	{
		printf("Enter the number: ");
		scanf("%f", &num);
		sum = sum + num;
	}
	while (num != 0);
	printf("%f", sum);
}
