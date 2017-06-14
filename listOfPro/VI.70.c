#include<stdio.h>
//Program to Count Blanks,Tabs and Newlines 
int main()
{
	char str[100]; int b, t, n, i; b = t = n = 0;
	puts("Enter a string: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ')b++;
		if(str[i]=='\t')t++;
		if(str[i]=='\n')n++;
	}
	printf("You have entered: %d Blank Space, %d Tab, %d New Lines", b, t, n);
	
	return 0;
}
