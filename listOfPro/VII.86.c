//duplication removal using pointers 

#include<stdio.h>
void drm(int *a, int *num);
int main()
{
	int a[100], *num, nu, i;
	puts("Enter number of element you want to enter: ");
	num = &nu;
	scanf("%d", num);
	for(i=0; i<*num; i++)scanf("%d", (a+i));
	drm(a, num);
	printf("Num =%d\n", *num);
	for(i=0; i<*num; i++)printf("%d\n", *(a+i));
	return 0;
}
void drm(int *a, int *num)
{
	int i, j, k;
	for(i=0; i<*num; i++)
	for(j=i+1; j<*num; j++)
	if(*(a+i)==*(a+j))
	{
		for(k=j; k<*num-1; k++)
		*(a+k)=*(a+k+1);
		j--; *num-=1;
	}
}

