/* This program is written by Chhorm Chhatra on 8/01/17 to display whether a number is either an Armstrong number or not */

#include <stdio.h>
#include <math.h>
main ()
{
	int num, number, x , y=0, sum=0;
	printf("Enter the number to find whether it is an Armstrong Number or not \n");
	scanf("%d", &num);
	number = num;
	while (num != 0)
	{
		num = num / 10;
		++y;
	}
	num = number;
	while (num !=0 )
	{
		x = num % 10;
		sum = sum + pow(x, y);
		num = num / 10;
	}
	if (sum == number)
	{
		printf("%d is an Armstrong Number \n", number);
	}
	else 
	{
		printf("%d is not an Armstrong Number \n", number);
	}
	
}
