#include<stdio.h>
//Add two polynomials using structures in function
struct addpolynomials{
	int a[4];
}k, l, m;
int main()
{
	int i;
	puts("f(x)=ax^3 + bx^2 + cx + d");
	puts("Enter value for f1(x): ");
	for(i=0 ; i<4; i++)
	scanf("%d", &k.a[i]);
	puts("Enter value for f2(x): ");
	for(i=0 ; i<4; i++)
	scanf("%d", &l.a[i]);
	for(i=0; i<4; i++)
	m.a[i]=k.a[i]+l.a[i];
	printf("%dx^3 + %dx^2 + %dx + %d", k.a[0], k.a[1], k.a[2], k.a[3]);
	printf("\n+\n%dx^3 + %dx^2 + %dx + %d", l.a[0], l.a[1], l.a[2], l.a[3]);
	printf("\n%dx^3 + %dx^2 + %dx + %d", m.a[0],m.a[1], m.a[2], m.a[3]);
	return 0;
	}
