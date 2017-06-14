#include<stdio.h>
int main()
{
	int i=0, j=0, k=0;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		printf("%d", i);
		printf("\n");
		
	}
	for(i=5; i>=0; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		printf("*");
		printf("\n");
		
	}
	for(i=5; i>=0; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//
	for(i=1; i<=5; i++)
	{
		for(k=5; k>=i-1; k--)printf(" ");
		for(j=1; j<=i; j++)printf("%d", i);
		printf("\n");
		
	}
	for(i=5; i>=1; i--)
	{
		for(k=5; k>=i-1; k--)printf(" ");
		for(j=1; j<=i; j++)printf("%d", i);
		printf("\n");
	}
	return 0;
}
