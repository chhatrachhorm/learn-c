#include<stdio.h>
//string concatenation without using strcat function  
int main()
{
	char str[100], st[100]; int i, k, j;
	puts("Enter the first string: ");gets(str);
	puts("Enter the second string: ");gets(st);	
	for(k=0; str[k]!='\0'; k++);
	for(i=k, j=0; st[j]!='\0'; i++, j++)
	{
		str[i]=st[j];
	}
	str[i]='\0';
	puts(str);
	return 0;
}
