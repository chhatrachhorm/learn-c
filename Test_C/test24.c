#include<stdio.h>
int hcf(int a, int b);
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int j = hcf(a, b);
	printf("%d", j);
	return 0;
}
int hcf(int a, int b)
{
	if(b != 0)
	return hcf(b, a%b);
	else return a;
}
