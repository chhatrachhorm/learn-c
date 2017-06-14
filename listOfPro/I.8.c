#include<stdio.h>
//Leap year checking 
int main()
{
	int y, num;
	printf("Enter a year: ");
	scanf("%d", &y); num = y;
	if(y % 4 == 0)printf("%d is a leap year", num);
	else printf("%d is not a leap year", num);
	return 0;
}
