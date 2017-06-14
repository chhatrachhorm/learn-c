#include<stdio.h>
//Program to find the given numbers in Armstrong or not
main ()
{
	int num, first, number, digits = 0, unit, test=1, check =0, i;
	printf ("Enter the number to find whether it is Armstrong Number or not: ");
	scanf ("%d", &num);
	number = num;
	while (num != 0)
	{
		num = num / 10;
		digits = digits + 1;
	}
	printf("%d\n", digits);
	first = number;
	while (number != 0)
	{
		unit = number % 10;
		for (i=0; i<digits; i++)
		{
			test = test * unit;
		}
		check = check + test;
		number = number / 10;
		test = 1;
	}
	if (check == first)
	{
		printf ("The number is armstrong");
	}
	else 
	printf ("no");
}

