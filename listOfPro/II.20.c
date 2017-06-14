#include<stdio.h>
int main()
{
	int num1, num2, gcd, lcm, remainder, numerator, denominator;
	printf("enter two numbers:\n"); scanf("%d %d", &num1, &num2);
	if(num1>num2)
	{
		numerator = num1; denominator =num2;
	}
	remainder = numerator % denominator;
	while(remainder !=0)
	{
		numerator = denominator;
		denominator = remainder;
		remainder = numerator % denominator;
	}
	gcd = denominator;
	lcm = num1 * num2 / gcd;
	printf("GCD of %d and %d = %d", num1, num2, gcd);
	printf("\nLCM of %d and %d = %d", num1, num2, lcm);
	return 0;
}
