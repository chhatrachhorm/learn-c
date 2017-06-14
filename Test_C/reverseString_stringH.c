//Program to reverse string by passing string via argument
//written by Chhorm Chhatra on Febuary 19,2017
#include<stdio.h>
#include<string.h>
void reverse(char str[]);
char str[1000];
int main()
{
	
	puts("Enter your string to be reversed");
	gets(str);
	reverse(str);
	puts("The reversed string is: ");
	puts(str);
}
void reverse(char st[])
{
	int i, j;
	char temp[1000];
	for(i=0, j=strlen(st)-1; j+1 != 0; i++, j--)
	{
		temp[i]=st[j];
	}
	temp[i]='\0';
	strcpy(str, temp);
}
