//convert a name into its ascii values
#include<stdio.h>
int main()
{
	char str[100]; int i;
	printf("Enter your name: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	printf("%d", str[i]);
	return 0;
}
