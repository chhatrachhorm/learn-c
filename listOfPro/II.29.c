#include<stdio.h>
#include<math.h>
//Amstrong checking 
int main()
{
	int i, num, a, temp =0, count =0;
	puts("Enter a number: ");
	scanf("%d", &num);a = num;
	while(num)
	{
		count++; num /=10;
	}num = a;
	while(num)
	{
		temp += pow(num%10, count);	
		num /= 10;
	}
	if(temp == a)
	printf("%d is an armstrong number", a);
	else 	printf("%d is not an armstrong number", a);
	return 0;
}
