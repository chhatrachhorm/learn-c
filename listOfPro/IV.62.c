#include<stdio.h>
//Exponent using recursion 
#define e 2.71
float ex(int num);
int main()
{
	int num; printf("Enter the power of exponential e");
	scanf("%d", &num);
	printf("e^%d = %f", num, ex(num));
	return 0;
}
float ex(int num)
{
	//float e = 2.71;
	if(num>0)
	return e * ex(num-1);
	else return 1;
}
