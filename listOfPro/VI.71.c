//Palindrome checking
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100], rev[100]; int i, j, count=0;
	puts("Enter a string or a word to check palindrome: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		count +=1; }//count number of string str
	printf("%d\n", count); i--;
	for(j=0; j<count; j++, i--)
	{
		rev[j]=str[i];
	}
	rev[j]='\0';
	puts(rev);
	puts(str);
	if(strcmp(rev, str)==0)printf("It's a palindrome");
	else printf("No it's not a palidrome number");
	return 0;
}
