//Program to count the length of string
//written by Chhorm Chhatra on Febuary 19,2017
#include<stdio.h>
int main()
{
	char str[10];
	int i=0;
	printf("Enter the string: \n");
	gets(str);
	for(i=0; str[i] != '\0'; i++);
	printf("The length of the string is %d", i);
	return 0;
}
