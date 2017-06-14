#include<stdio.h>
//Transpose of a matrix 
int main()
{
	int i, j, a[3][3], b[3][3];
	puts("enter element of the matrix 3x3");
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			scanf("%d", &a[i][j]);
	puts("Matrix you entered: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
			
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			b[i][j]=a[j][i];
		
	puts("Transpose of matrix you entered: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		printf("%d\t", b[i][j]);
		printf("\n");
	}
	
	
	
	return 0;
}
