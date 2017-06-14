#include<stdio.h>
//Table of N and square of N 
int main()
{
	int i, num, ans;
	puts("Enter value of N to display its table square value");
	scanf("%d", &num);
	for(i=0; i<=num; i++)
	{
		ans = i * i;
		printf("%d --> %d\n", i, ans);
	}
	return 0;
}
