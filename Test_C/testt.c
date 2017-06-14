#include<stdio.h>
void test(int a, char b[]);
int main()
{
	int c=1; char d[5];
	test(c, d);
	printf("%s", d);
	return 0;
}
void test(int a, char b[])
{
	b = a + 64;
	
}
