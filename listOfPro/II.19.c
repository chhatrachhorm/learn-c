#include<stdio.h>
//Pascal triangle
int main()
{
	int i, j, rows, k;
	puts("Enter number of rows of pascal stars: ");
	scanf("%d", &rows); rows -=1;
	for(i=0; i<=rows; i++)
	{
		for(k=rows-i; k>=0; k--)
		printf(" ");
		for(j=0; j<=i; j++)
		{
			printf("%d", c(i, j));
			printf(" ");
		}
		printf("\n");
	}
}
int c(int a, int b)
{
	int combination=0;
	combination = fact(a) / (fact(b) * fact(a-b));
	return combination;
}
int fact(int num)
{
	int ans=1, i;
	for(i=1; i<=num; i++)
	ans *= i;
	return ans;
}

