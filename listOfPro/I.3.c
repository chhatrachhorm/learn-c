#include<stdio.h>
//Convert Celsius to Fahrenheit 
int main()
{
	int cel; float fah; char check;
	printf("Enter a choice below: \n");
	printf("a) Celsius to Fahrenheit \nb) Fahrenheit to Celsuis\n");
	check = getchar();
	if(check == 'a' || check == 'A')
	{
		puts("Enter the value of celsius: ");
		scanf("%d", &cel);
		printf("%d C = %.2f F", cel, fah = 1.8 * cel + 32);
	}
	else if(check == 'b' || check == 'B')
	{
		puts("Enter the value of Fahrenheit: ");
		scanf("%f", &fah);
		printf("%.2f F = %d C", fah, cel = (fah - 32) / 1.8);
	}
	return 0;
}
