#include<stdio.h>
//Bubble Sort
void bsort(int a[], int num);
int main()
{
	int i, num, a[100];
	puts("Enter number of element: ");
	scanf("%d", &num);
	for(i=0; i<num; i++)scanf("%d", &a[i]);
	bsort(a, num);
	for(i=0; i<num; i++)printf("%d\t", a[i]);
	return 0;
}
void bsort(int a[], int num)
{
	int i, j, temp=0;
	for(i=0; i<num-1; i++)
	{
		for(j=0; j<num-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
