#include<stdio.h>
main()
{
	float a, num, ans=0, i;
	puts("Enter no of element to find the sum of 1/n pattern: ");
	scanf("%f", &a);
	num = a;
	for(i=1; i<=num; i++)
	{
		ans = ans + 1/i;
		printf("1/%.0f + ", i);
	}
	printf("\b\b= %f", ans);
}
