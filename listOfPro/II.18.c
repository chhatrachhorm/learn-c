#include<stdio.h>
//Upper case to Lower case 
int main()
{
	int i;
	char str[100];
	puts("Enter a string");
	gets(str); fflush(stdin);
	for(i=0; str[i]!='\0'; i++)
	{
		if(96<str[i] && str[i]<123)
		{
		str[i] = str[i]-32;
		}
	}
	puts(str);
	return 0;
}
