#include<stdio.h>
int main()
{
	int a, b, ans;
	puts("Enter height and width of the rectangle: ");
	scanf("%d %d", &a, &b);
	ans = a * b;
	printf("Area = %d", ans);
	return 0;
}
