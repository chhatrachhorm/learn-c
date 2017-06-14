/*Program to display number from one to a hundred with three exceptions:
a. numbers divisible by 3, print: Fizz
b. numbers divisible by 5, print: Buzz
c. numbers divisible by 3 and 5, print: FizzBuzz */
// Written by Chhorm Chhatra on 16/01/2016

#include <stdio.h>
main ()
{
	int i;
	for(i=1; i<=100; i++)
	{
		if(i%3 == 0 && i%5 == 0)
		{
			printf("FizzBuzz \n");
		}
		else if(i%3 == 0)
		{
			printf("Fizz \n");
		}
		else if(i%5 == 0)
		{
			printf("Buzz \n");
		}
		else
		{
			printf("%d \n", i);
		}
	}
}

