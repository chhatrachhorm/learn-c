#include<stdio.h>
//Matrix Multiplication
int main()
{
	int a[100][100], b[100][100], c[100][100], i, j, k, row, col;
	puts("Matrix Addition");
	puts("Enter number of rows: ");scanf("%d", &row);
	puts("Enter number of cols: ");scanf("%d", &col);
	puts("Enter the first matrix");
	for(i=0; i<row; i++)
	for(j=0; j<col; j++)
	scanf("%d", &a[i][j]);
	puts("Enter the second Matrix");
	for(i=0; i<row; i++)
	for(j=0; j<col; j++)
	scanf("%d", &b[i][j]);
	for(i=0; i<row; i++)
	for(j=0; j<col; j++)
	for(k=0; k<col; k++)
	c[i][j] += a[i][k]*b[k][j];
	puts("The multiplication: ");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		printf("%d\t", c[i][j]);
		printf("\n");
	}
}
