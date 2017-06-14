//This program is written by Chhorm Chhatra on 08/01/17
//Program to count the number of digit for the given input
#include<stdio.h>
main ()
{
	int num, number, digits=0;
	printf("Enter the number to count its digits ");
	scanf("%d", &num);
	number = num;
	while (num != 0)
	{
		num = num / 10;
		digits = digits + 1;
	}
	printf ("the digit of %d is %d", number, digits);
/*	while (num)
	{
		num /=10;
		++digits;
	}
	*/
}
