//Program to do matrix addition
//Program to do matrix addition
//Written by Chhatra Chhorm on 23/01/2017
#include <stdio.h>
main()
{
	int a[3][3], b[3][3], c[3][3], i, j;
	puts("Enter the value for matrix A: ");
	for(i=0; i<3; i++)for(j=0; j<3; j++)scanf("%d", &a[i][j]);
	puts("Enter the value for matrix B: ");
	for(i=0; i<3; i++)for(j=0; j<3; j++)scanf("%d", &b[i][j]);
	for(i=0; i<3; i++)for(j=0; j<3; j++) c[i][j]=a[i][j]-b[i][j];
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t%d", c[i][j]);
		}
		printf("\n");
	}
	
}
