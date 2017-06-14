#include<stdio.h>
//Factorial without using function 
int main()
{
	int num, ans = 1, i;
	puts("Enter a number to find its factoriel: ");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
		ans *= i;	
	}
	printf("Factoriel of %d is %d", num, ans);
	return 0;
}
