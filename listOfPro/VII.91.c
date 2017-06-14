//Reverse the String Using Pointers 
#include<stdio.h>
int main()
{
	char a[100], temp; int i, j, k;
	gets(a);
	for(i=0; *(a+i)!='\0'; i++);
	k = i-1;
	for(j=0; j<i/2; k--, j++)
	{
		temp = *(a+j);
		*(a+j)=*(a+k);
		*(a+k)=temp;
	}
	puts(a);
	return 0;
}
