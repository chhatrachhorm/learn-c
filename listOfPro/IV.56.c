#include<stdio.h>
//Factorial using recursive function 
int fact(int num);
int main()
{
	int num;
	printf("Enter a num: ");
	scanf("%d", &num);
	printf("%d! = %d", num, fact(num));
	return 0;
}
int fact(int num)
{
	if(num>1)
		return num*fact(num-1);
	else return 1;

}
