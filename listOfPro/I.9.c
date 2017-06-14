#include<stdio.h>
//Positive negative checking 
int main()
{
	int num;
	puts("Enter a num");
	scanf("%d", &num);
	if(num == 0)puts("You have entered Zero");
	else if(num < 0)puts("The number is negative");
	else puts("The number is positive");
	return 0;
}
