//Sorting in alphabetical order 
#include<stdio.h>
#include<string.h>
struct words{
	char a[100];
}b[100];
int main()
{
	int i, j, num; char temp[100];
	puts("How many word you want to sort?");
	scanf("%d", &num); fflush(stdin);
	for(i=0; i<num; i++)
	gets(b[i].a);
	for(i=0; i<num; i++)
	puts(b[i].a);
	for(i=0; i<num-1; i++)
	{
		for(j=i+1; j<num; j++)
		{
			if(strcmp(b[i].a, b[j].a)>0)
			{
				strcpy(temp, b[i].a);
				strcpy(b[i].a, b[j].a);
				strcpy(b[j].a, temp);
			}
		}
	}
	puts("After sorting: ");
	for(i=0; i<num; i++)
	puts(b[i].a);
	return 0;
}
