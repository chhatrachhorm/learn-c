#include<stdio.h>
//Count the number of digit in an integer
int main()
{
	int i, num, a, count=0;
	puts("Enter a number: ");
	scanf("%d", &num);a = num;
	while(num)
	{
		count++;
		num /=10;
	}
	printf("Digits of %d is %d", a, count);
	return 0;
}
