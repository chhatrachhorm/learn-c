#include<stdio.h>
//Check the given number is odd or even 
int main()
{
	int num, a;
	printf("Enter a number : ");
	scanf("%d", &num); a = num;
	if(num % 2 == 0)printf("%d is even", a);
	else printf("%d is odd", a);
	return 0;
}
