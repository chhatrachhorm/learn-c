#include<stdio.h>
//Sorting integer array using pointers 
void sort(int *a, int *num);
int main()
{
	int a[100], nu, *num, i; 
	num = &nu;
	printf("Enter number of element: ");
	scanf("%d", num);
	for(i=0; i<*num; i++)
	scanf("%d", a+i);
	sort(a, num);
	for(i=0; i<*num; i++)
	printf("%d\n", *(a+i));
	return 0;
}
void sort(int *a, int *num)
{
	int i, j, temp;
	for(i=0; i<*num; i++)
	{
		for(j=i+1; j<*num; j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp = *(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
}
