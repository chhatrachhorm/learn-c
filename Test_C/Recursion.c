//Recursion
#include<stdio.h>
int nsum(int num);
void revs();
int factoriel(int num);
int hcf(int a, int b);
int main()
{
	int i, max, a, b;

	printf("Enter the max num to find the sum of the natural num: ");scanf("%d", &max);
	printf("\nsum = %d", nsum(max)); printf("\nThe factoriel is %d", factoriel(max));
	printf("\nReverse string now: ");	fflush(stdin);
	revs(); printf("\n");
	printf("\nEnter two number: \n"); scanf("%d %d", &a, &b);
	printf("HCF of %d and %d is %d", a, b, hcf(a, b));
	return 0;
}
int nsum(int num)
{
	if(num==0)return 0;
	else return num + nsum(num-1);
}
int factoriel(int num)
{
	if(num==1)return 1;
	else return num * factoriel(num-1);
}
void revs()
{
	char c;
	scanf("%c", &c);
	if(c !='\n') 
	{
		revs();
		printf("%c", c);
	}
}
int hcf(int a, int b)
{
	if(b != 0)return hcf(b, a%b);
	else return a;
}
