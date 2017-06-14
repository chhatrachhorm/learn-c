/*This program is written to practice string
write by Chhorm Chhatra following Mr.Leo on 15/Feb/2017*/
#include<stdio.h>
int main()
{
	char c[1000], ch;
	int i, count = 0;
	printf("Enter the string\n");
	gets(c);
	fflush (stdin);
	printf("Enter a letter to be counted: ");
	scanf("%c", &ch);
	for(i=0; c[i]!='\0'; i++)
	{
		if(ch == c[i])
		++count;
	}
	printf("%c = %d", ch, count);
	return 0;
}
