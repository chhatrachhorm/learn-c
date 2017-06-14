#include<stdio.h>
//Number palindrome  
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
	if(a==rev)printf("%d is a palindrome number", a);
	else printf("%d isnt a palidrome number", a);
	
	return 0;
}
