#include<stdio.h>
//Duplication Removal
int main()
{
	int a[100], i, j, k, limit;
	puts("Enter number of elements: ");
	scanf("%d", &limit);
	for(i=0; i<limit; i++)
	scanf("%d", a+i);
	for(i=0; i<limit; i++)
		for(j=i+1; j<limit; j++)
				if(a[i] == a[j])
					{
						for(k=j; k<limit-1; k++)
						a[k]=a[k+1];
						limit -= 1; j-=1;
					}
	for(i=0; i<limit; i++)
	printf("%d\t", a[i]);
	return 0;
}
