//program to do the matrix multiplication 
//written by chhorm chhatra on 23/01/2017
#include<stdio.h>
int a[3][3], b[3][3], c[3][3], i, j, k;
main()
{
	printf("Program to do the Matrix Multiplication \n");
	printf("Enter the Matrix A: \n");
	for(i=0; i<3; i++)for(j=0; j<3; j++)scanf("%d", &a[i][j]);
	printf("Enter the Matrix B: \n");
	for(i=0; i<3; i++)for(j=0; j<3; j++)scanf("%d", &b[i][j]);
	for(i=0; i<3; i++)for(j=0; j<3; j++)c[i][j]=0;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<3; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			
		}
	}
	printf("The Multiplication is: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)//
		{
			printf("\t%d", c[i][j]);	
		}
		printf("\n");
	}

}
