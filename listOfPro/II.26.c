#include<stdio.h>
//Reverse the digits of given number 
int main()
{
	int i, num, a, rev=0;
	puts("Enter a number: ");
	scanf("%d", &num);a = num;
	while(num)
	{
		rev = rev*10 + num%10;
		num /= 10;
	}
	printf("%d --> %d", a, rev);
	
	return 0;
}
