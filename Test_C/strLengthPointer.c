#include<stdio.h>
int strl(char *c);
int main()
{
	char a[100]; int count=0;
	puts("Enter a string to be counted");
	gets(a);
	printf("String Length = %d", strl(a));
	return 0;
}
int strl(char *p)
{
	int count= 0;
	while(*p !='\0')
	{
		count++;
		p++;
	}
	return count;
}
