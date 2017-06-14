//function pointers
#include<stdio.h>
void swap(int *a, int *b);
int main()
{
	int a, b; 
	puts("Enter two numbers:");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("a = %d\nb = %d", a, b);
	return 0;
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
