#include<stdio.h>
main()
{
	int arr[30], element, num, i, location;
	printf("\n Enter no of elemets: ");
	scanf("%d", &num);
	for(i=0; i<num; i++)scanf("%d", &arr[i]);
	printf("\nEnter the location to be deleted ");
	scanf("%d", &location);
	for(i=location-1; i<num-1; i++)
	{
		arr[i]=arr[i+1];		
	}
	num--;
	for(i=0; i<num; i++)printf("%d", arr[i]);
	
	
}
