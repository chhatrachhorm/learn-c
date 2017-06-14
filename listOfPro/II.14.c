#include<stdio.h>
//Multiplication table 
int main()
{
	int i, j, num, ans=1;
	printf("Enter a number of the limit of multiplication table: "); scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			ans = i * j;
			printf("%d\t", ans);
		}
		printf("\n");
	}
	return 0;
}
