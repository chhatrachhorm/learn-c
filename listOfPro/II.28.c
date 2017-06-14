#include<stdio.h>
//Digit summation 
int main()
{
	int i, num, a, sum=0;
	puts("Enter a number: ");
	scanf("%d", &num);a = num;
	while(num)
	{
		sum += num%10;
		num /= 10;
	}
	printf("digit addition of %d is %d", a, sum);
	return 0;
}
