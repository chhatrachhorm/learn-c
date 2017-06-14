#include<stdio.h>
//Linear Search
int main()
{
	int a[100], temp, limit, i, j, b[100];
	puts("Enter number of elements: ");
	scanf("%d", &limit);
	puts("Enter elements: ");
	for(i=0; i<limit; i++)
	scanf("%d", a+i);
	puts("Now enter what you want to search: ");
	scanf("%d", &temp);
	for(i=0, j=0; i<limit; i++)
	{
		if(a[i]==temp)
		{
			b[j] = i+1;
			j++;	
		}
	}
	printf("We found out %d in %d locations(s)\n", temp, j);
	for(i=0; i<j; i++)
	printf("a[%d]\t", b[i]);
	
	return 0;
}

