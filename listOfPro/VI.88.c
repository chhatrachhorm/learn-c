//Sum of array using pointers 
#include<stdio.h>
int main()
{
	int a[100], i, sum=0, num;
	printf("Enter number of element: ");
	scanf("%d", &num);
	for(i=0; i<num; i++)
	scanf("%d", a+i);
	for(i=0; i<num; i++)
	sum += *(a+i);
	printf("Sum = %d", sum);
}
