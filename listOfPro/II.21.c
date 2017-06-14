#include<stdio.h>
//Prime numbers between two ranges 
int main()
{
	int i, a, b, flage=1, j;
	printf("Enter the range of number to display prime number: ");
	scanf("%d %d", &a, &b);
	puts("Prime Number: ");
	for(i=a; i<=b; i++)
	{
		if(i==1)
		{
			printf("NB. 1 is not considered as prime number.\n");
			continue;
		}
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			flage = 0;
		}
		if(flage == 1) printf("%d\t", i);
		flage = 1;
	
	}
}
