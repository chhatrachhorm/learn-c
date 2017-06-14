#include<stdio.h>
//comparing 2 strings without strcmp function  
int main()
{
	char str[100], st[100]; int count, str1, str2, i;
	str1 = str2 = 0;
	puts("Enter the first string: ");gets(str);
	puts("Enter the second string: ");gets(st);	
	for(i=0; str[i]!='\0'; i++)
	{
		if(st[i]=='\0')
		{
			str1 = 1; break;
		}
		if(str[i]>st[i])
		{
			str1 = 1; break;
		}else if(st[i]>str[i])
		{
			str2 = 1; break;
		}
	}
	count = str1 - str2; 
	if(count > 0)printf("The first string is bigger the second one");
	else if(count<0)printf("The second string is bigger than the first one");
	else if(count==0)printf("They are the same");
	return 0;
}
