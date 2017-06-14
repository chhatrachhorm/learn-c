#include<stdio.h>
//Floyds Triangle 
int main()
{
	int i, rows, j=1, k; 
	printf("Enter number of rows to print Floyds Triangle:\n");
	scanf("%d", &rows);
	for(i=1; i<=rows; i++)
	{
		for(k=1; k<=i; k++, j++)
		printf("%d ", j);
		printf("\n");
	}
	
	return 0;
}
