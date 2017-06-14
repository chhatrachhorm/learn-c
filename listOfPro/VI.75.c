#include<stdio.h>
//copying one string to another without using strcpy  
int main()
{
	char str[100], st[100]; int i;
	puts("Enter the first string: ");gets(str);
	puts("Enter the second string: ");gets(st);	
	for(i=0; st[i]!='\0'; i++)
	{
		str[i]=st[i];
	}
	str[i]='\0';
	puts(str);
	return 0;
}
