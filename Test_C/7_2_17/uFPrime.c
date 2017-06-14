//Program to practice Function 
//Finind Prime Number
//Written By Chhorm Chhatra by following Mr. Leo on Feb/07/2016
#include<stdio.h>
void prime();
int main()
{
	prime();
	return 0;
}
void prime()
{
	int num, number, i, test;
	printf("Enter any number to test whether it is a prime number or not: ");
	scanf("%d", &num);
	number = num;
	if(num==1)printf("1 is not considered as a prime number");
	else 
	{
		if (num < 0) num = -num;
		for(i=2; i<num; i++)
			if( num%i == 0)
				test = 1;

		if(test==1)
			printf("%d is not prime number", number);
			else
			printf("%d is a prime number", number);
	}
}

