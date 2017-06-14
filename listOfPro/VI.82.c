//Remove characters in string except alphabets 
#include<stdio.h>
int main()
{
	char str[100]; int i, j, k;
	gets(str);
	for(i=0; str[i]!='\0'; i++);
	printf("%d\n", i); j=i;
	for(i=0; str[i]!='\0'; i++)
	{
		while(!(((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||str[i]=='\0')))
		{
			for(j=i; str[j]!='\0'; j++)
			str[j]=str[j+1];
		}
	}
	puts(str);
	return 0;
}
