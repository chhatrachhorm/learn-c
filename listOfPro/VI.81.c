//Find the frequency of a character in a string 
#include<stdio.h>
int main()
{
	char str[100], a; int count, i;
	gets(str);fflush(stdin);
	printf("Enter a letter to be counted: "); a= getchar();
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==a)count++;
	}
	printf("We have found %c for %d time(s)", a, count);
	return 0;
}
