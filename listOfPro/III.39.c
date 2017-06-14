#include<stdio.h>
//Deleting an array element 
int main()
{
	int i, temp, a[100], limit=0, replace, index;
	puts("how many element you want to enter?");
	scanf("%d", &limit);
	for(i=0; i<limit; i++)scanf("%d", a+i);
	printf("Enter which index you want to delete: ");
	scanf("%d", &index);
	for(i=index-1; i<limit-1; i++)
	{
		a[i]=a[i+1];
	}
	for(i=0; i<limit-1; i++)
	{
		printf("%d\n", *(a+i));
	}
	
	
	
	return 0;
}
