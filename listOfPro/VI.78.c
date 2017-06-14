//Finding vowels
#include<stdio.h>
int main()
{
	char str[100]; int a[100], i, j, count=0; i=j =0;
	puts("Enter a string: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
		||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			a[j]=i+1;
			j++; count++;
		}
	}
	if(count==0)puts("No vowel found");
	else
	{
	puts("We found out vowels in the index of: ");
	for(i=0; i<count; i++)
	printf("%d\t", a[i]);
	}
	return 0;
}
