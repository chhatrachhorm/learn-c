//Reverse the given string 
#include<stdio.h>
int main()
{
	char a[100], temp; int j, k, i;
	gets(a);
	for(i=0; a[i]!='\0'; i++);
	k = i-1; 
	printf("%d", i);
	for(j=0; j<i/2; j++, k--)
	{
		temp = a[j];
		a[j]=a[k];
		a[k]=temp;
	}
	puts(a);
}
