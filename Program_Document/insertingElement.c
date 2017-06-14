#include<stdio.h>
main()
{
	int arr[30], element, num, i, location;
	printf("\n Enter no of elemets: ");
	scanf("%d", &num);
	for(i=0; i<num; i++)
	scanf("%d", &arr[i]);
	printf("\nEnter the number of element to be inserted: ");
	scanf("%d", &element);
	printf("\n Enter the number of location to be inserted: ");
	scanf("%d", &location);
	for(i=num; i>=location; i--)
	arr[i]=arr[i-1];
	num++;
	arr[location-1]= element;
	for(i=0; i<num; i++)
	printf("%d", arr[i]);
}
