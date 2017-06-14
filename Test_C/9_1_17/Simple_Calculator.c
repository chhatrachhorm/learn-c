//This program is written by Chhorm Chhatra on 9/01/17
//Program to maek a simple claculator to do the basic arithmetic opearotr using switch case
#include <stdio.h>
main ()
{
	float first, second, ans;
	char sign =' ';
	printf("Simple Calculator \n");
	printf("Enter the number :");
	scanf("%f", &first );
	printf("Enter the operator :");
	fflush (stdin);
	sign = getchar();
	fflush (stdin);
	printf("Enter the number :");
	scanf("%f", &second );
	switch (sign)
	{
		case '+':
			ans = first + second;
			printf("%f + %f = %f", first, second, ans);
			break;
		case '-':
			ans = first - second;
			printf("%f - %f = %f", first, second, ans);
			break;
		case '*':
			ans = first * second;
			printf("%f * %f = %f", first, second, ans);
			break;
		case '/':
			ans = first / second;
			printf("%f / %f = %f", first, second, ans);
			break;
		default: 
			printf("Please enter the appropriate operator!");	
	}	
}
