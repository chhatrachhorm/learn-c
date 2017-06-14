/*Program to remove all characters except alphabet manually
written by Chhorm Chhatra on Febuary 19,2017 */
#include<stdio.h>
int main()
{
	char line[100];
	int i, j;
	puts("Enter the string: ");
	gets(line);
	for(i=0; line[i]!='\0'; i++)
	{
		while(!((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z') || line[i]=='\0'))
		{
			for(j=i; line[j]!='\0'; j++)
			{
				line[j] = line[j+1];
			}
			line[j]='\0';
		}
	}
	puts(line);
	return 0;
}
