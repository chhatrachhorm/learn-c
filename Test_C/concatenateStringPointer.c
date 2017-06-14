#include<stdio.h>
int main()
{
	char a[100], b[50];int i, j;
	puts("Enter 2string to concatenate: ");
	gets(a);
	gets(b);
	while(*(a+j)!='\0')
	{
		j++;
	}
	for(i=0; *(b+i)!='\0'; i++, j++)
	{
		*(a+j) = *(b+i);
	}
	*(a+j)='\0';
	puts(a);
	return 0;
}
