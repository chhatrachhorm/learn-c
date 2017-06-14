#include<stdio.h>
int main()
{
	int i, first, last, mid, num, search, a[100], j, temp;
	puts("Enter number of element: "); scanf("%d", &num);
	puts("Enter the element: ");
	for(i=0; i<num; i++)
	scanf("%d", a+i);
	for(i=0; i<num; i++)
	for(j=i+1; j<num; j++)
	if(a[i]>a[j])
	{
		temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	puts("Your lists: ");
	for(i=0; i<num; i++)
	printf("%d\n", *(a+i));
	puts("Enter what to find: ");
	scanf("%d", &search);
	first = 0; 
	last = num -1;
	mid = (first + last)/2;
	while(first <= last)
	{
		if(a[mid]<search)
		first = mid + 1;
		else if(a[mid]==search)
		{printf("%d is found at %d\n", search, mid+1);
		break;
		}
		else last = mid-1;
		mid = (first+last)/2;
	}
	return 0;
}
