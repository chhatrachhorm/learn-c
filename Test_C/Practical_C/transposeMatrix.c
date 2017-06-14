#include<stdio.h>
main()
{
	int n, m, i, j;
	printf("Enter number of row and colmum: \n");
	scanf("%d", &n);
	scanf("%d", &m);
	int a[n][m], b[m][n];
	puts("Enter the element for Matrix A to be transposed\n");
	for(i=0; i<n; i++)for(j=0; j<m; j++) scanf("%d", &a[i][j]);
	puts("Matrix A; you have just entered: ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("\t%d", a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)for(j=0; j<m; j++) b[j][i]=a[i][j];
	puts("The transpose of Matrix A is: ");
	for(j=0; j<m; j++)
	{
		for(i=0; i<n; i++)
		{
			printf("\t%d", b[j][i]);
		}
		printf("\n");
	}
}
