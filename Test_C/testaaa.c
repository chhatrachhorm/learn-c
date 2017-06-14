#include<stdio.h>
int main()
{
	int a=1, ans=0, num, unit;
	scanf("%d", &num);
	while(num)
	{
		unit = num % 10;
		ans = 10*ans + unit;
		num /= 10;
	}
	printf("%d", ans);
	puts("Enter a number");
	scanf("%d", &num);
	ans= 0;
	while(num)
	{
		unit = num % 2; 
		ans += unit*a;
		a *= 10;
		num /=2;
	}
	printf("%d", ans);
}
