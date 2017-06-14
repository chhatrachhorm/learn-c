#include<stdio.h>
int main()
{
	char a[100], search[100], temp[100];
	int i, j, k, l, m;
	gets(a);
	printf("What words you want to search for: ");
	gets(search);
	for(i=0; search[i]!='\0'; i++);
	printf("%d\n", i);
	for(j=0; a[j]!='\0'; j++);
	printf("%d\n", j);
	
	for(k=0; a[k]!='\0'; k++)
	{
		for(l=k, m=0; l<i; l++, m++)
		/*if(a[l]!='\0')*/temp[m]=a[l];
		puts(temp);
		if(strcmp(temp, search)==0)
		{
			printf("We found %s at %d", search, k++);
			break;
		}
		
	}
}
