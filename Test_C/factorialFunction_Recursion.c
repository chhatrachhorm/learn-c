//Program to practice Recursive Function 
//Factorial
//Written By Chhorm Chhatra by following Mr. Leo on Feb/07/2016
#include<stdio.h>
int factorial(int a);
int main()
{
	int num, ans;
	printf("Enter any number to find the factorial: ");
	scanf("%d", &num);
	if(num <= 0)printf("plese Enter only positive number");
	else
	{
		ans = factorial(num);
		printf("%d! = %d", num, ans);
	}
	return 0;
}
int factorial(int a)
{
	if(a > 1)
	{
		return a * factorial(a-1);
	}
	else 
	return 1;
}

