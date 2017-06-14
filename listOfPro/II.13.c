#include<stdio.h>
//Calculate x to the power y 
int main()
{
	int x, y, ans=1, i;
	printf("Enter the base: ");scanf("%d", &x);
	printf("Enter the power: ");scanf("%d", &y);
	for(i=1; i<=y; i++)
	{
		ans *= x;
	}
	printf("x ^ y = %d", ans);
	return 0;
}
