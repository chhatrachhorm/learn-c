#include<stdio.h>
//min and max of array
int min(int a[], int b);
int max(int a[], int b);
int main()
{
	int a[50], i, ma, mi, num;
	puts("Enter number of element: ");
	scanf("%d", &num);
	puts("Enter the element: ");
	for(i=0; i<num; i++)scanf("%d", a+i);
	ma = max(a, num);
	mi = min(a, num);
	printf("%d is the max\n", ma);
	printf("%d is the min", mi);
	return 0;
}
int min(int a[], int b)
{
	int temp=a[0], i;
	for(i=0; i<b; i++)
	{
		if(temp>a[i])
		temp = a[i];
	}
	return temp;
}
int max(int a[], int b)
{
	int temp=a[0], i;
	for(i=0; i<b; i++)
	{
		if(temp<a[i])
		temp = a[i];
	}
	return temp;
}
