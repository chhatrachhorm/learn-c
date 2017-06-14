/*Program to remove all characters except alphabet manually
written by Chhorm Chhatra on Febuary 19,2017 */
#include<stdio.h>
int main()
{
	char str[100], change[100];
	int i, j=0, k;
	puts("Enter whatsoever!");
	gets(str);
	for(i=0; str[i] !='\0'; i++)
	{
		if(!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z')))continue;
		else 
		{
			change[j]=str[i];
			j++;
		}
	}
	change[j]='\0';
	puts(change);
	return 0;
}
