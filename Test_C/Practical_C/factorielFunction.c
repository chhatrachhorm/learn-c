#include<stdio.h>
int main()
{
	int num, ans;
	printf("Enter a number to find factoriel: ");
	scanf("%d", &num);
	ans = fact(num);
	printf("%d", ans);
}
fact(a){
	int i, answer = 1;
	for(i=a; i>0; i--)
	{
		answer = answer * i;
	}
	return answer;
}
