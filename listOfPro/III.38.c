#include<stdio.h>
//Insert an element in an array
int main()
{
	int i, temp, a[100], limit=0, replace, index;
	puts("how many element you want to enter?");
	scanf("%d", &limit);
	for(i=0; i<limit; i++)scanf("%d", a+i);
	printf("Enter which index you want insert to: ");
	scanf("%d", &index);
	for(i=index-1; i<limit+1; i++)
	{
		if(i==index-1)
		{
			temp = a[i];
			puts("Please enter what you want to insert: ");
			scanf("%d", &a[i]);
			continue;
		}
		replace = a[i];
		a[i]=temp;
		replace = temp;	
	}
	for(i=0; i<limit+1; i++)
	{
		printf("%d\n", *(a+i));
	}
	
	
	
	return 0;
}
