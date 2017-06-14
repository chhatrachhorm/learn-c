#include<stdio.h>
int main()
{
	long int base, head, ans;
	printf("Power of a Num\n");
	puts("Enter the base: ");
	scanf("%ld", &base);
	puts("Enter the power: ");
	scanf("%ld", &head);
	ans = power(base, head);
	printf("%d", ans);
	return 0;
}
power (a, b){
	int i, answer = 1;
	for(i=1; i<b; i++)
	{
		answer = answer * a;
	}
	return answer;
}
