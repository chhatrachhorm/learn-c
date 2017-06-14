#include<stdio.h>
//Factorial using function
int fact(int i);
int main()
{
	int num;
	puts("Enter a number: ");
	scanf("%d", &num);
	printf("%d! = %d", num, fact(num));
	return 0;
}
int fact(int i)
{
	int k=1, ans;
	for(k=1; k<=i; k++)
	ans *= k;
	return ans;
}
