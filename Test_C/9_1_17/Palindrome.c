//This program is written by Chhorm Chhatra on 9/01/17
//Program to find the given number is palindrome or not
#include <stdio.h>
main ()
{
	int num, number, unit, rev=0;
	printf("Enter the number to find whether it is a palidrome number or not: ");
	scanf("%d", &num);
	number = num;
	while (num)
	{
		unit = num % 10;
		rev = rev * 10 + unit;
		num = num / 10;
	}
	if (rev == number)
	{
		printf("%d is palidrome", number);
	}
	else printf("%d isn't a palidrome number", number);
}
