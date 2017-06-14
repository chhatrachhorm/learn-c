#include<stdio.h>
//Find largest among three numbers 
int main()
{
	int a, b, c;
	puts("Enter theree value to find the biggest one:");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c) printf("%d is the biggest", a);
	else if(b>a && b>c)printf("%d is the biggest", b);
	else printf("%d is the biggest", c);
	return 0;
}
