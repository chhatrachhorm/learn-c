#include<stdio.h>
//Prime Factors 
int main()
{
	int i, j, k, num, flag=1, a[100];
	puts("Enter a number: ");
	scanf("%d", &num);
	for(i=2, k=0;i<=num; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j==0)flag=0;
		}
		if(flag==1)
		{
			if(num%i==0)
			{
				*(a+k)=i; k++;
			}
		}
		flag=1;
	}
	printf("Prime Factors of %d is: ", num);
	for(i=0; i<k; i++)
	{
		printf("%d ", *(a+i));
	}
	return 0;
}
