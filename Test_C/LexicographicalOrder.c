#include<stdio.h>
#include<string.h>
int main()
{
	int i, j;
	char str[10][100], temp[100];
	for(i=0; i<10; i++)
	{
		scanf("%s", str[i]);
	}
	for(i=0; i<10; i++)
	for(j=i+1; j<10; j++)
	{
		if(strcmp(str[i], str[j])>0)
		{
			strcpy(temp, str[i]);
			strcpy(str[i], str[j]);
			strcpy(str[j], temp);
		}
	}
	printf("Lexicographical Order: \n");
	for(i=0; i<10; i++)
	{
		puts(str[i]);
	}
}
