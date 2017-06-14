//Program to practice continue loop earlier construct
//Program to display the first 125 units of the sequence
//Written by  Chhorm CHhatra on 12/01/2017
#include <stdio.h>
#include <math.h>
#include "mymath.h"
main ()
{
	float u, v, n, i;
	printf("Program to display the first 125 units of the sequence: \n");
	printf("Enter the value of the first unit: ");
	scanf("%f", &u);
	printf("Enter the value of the second unit: ");
	scanf("%f", &v);
	for(i=0; i<125; i++)
	{
		if (i==0)
		{
			printf("%.1f \t", u);
			continue;
		}
		if (i==1)
		{
			printf("%.1f \t", v);
			continue;
		}
		n = (2.5 * u + e * v) / pi;
		u = v;
		v = n;
		printf("%.1f \t", n);
	}
	
}
