//Program to practice Recursive Function 
//Reverse string without using array or string
//Written By Chhorm Chhatra by following Mr. Leo on Feb/07/2016
#include<stdio.h>
void reverse();
void main()
{
	printf("Enter your sentence to be reversed: \n");
	reverse();
}
void reverse()
{
	char c;
	scanf("%c", &c);
	if(c != '\n')
	{
		reverse();
		printf("%c", c);
	}
}
