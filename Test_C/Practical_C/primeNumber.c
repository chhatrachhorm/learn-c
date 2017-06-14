#include<stdio.h>
main()
{
	int a, ans=1, i, num;
	puts("Enter a number to find either it is a prime number or not: ");
	scanf("%d", &a);
	num = a;
	for(i=2; i<num; i++)
	{
		if(num % i == 0)
		{
			ans = 0;
			printf("%d is not a prime number", a);
			break;
		}
		else ans = 1;
	}
	if( ans == 1)printf("%d is a prime number", a);
}
