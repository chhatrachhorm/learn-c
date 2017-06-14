#include<stdio.h>
//. Add two complex numbers 
struct complex{
	int alpha, beta;
}a, b, c;
int main()
{
	printf("Enter First Comlix Numn\t(Real Part):");scanf("%d", &a.alpha);
	printf("\t(Imagination Part):");scanf("%d", &a.beta);
 	printf("Enter SecondComlix Numn\t(Real Part):");scanf("%d", &b.alpha);
	printf("\t(Imagination Part):");scanf("%d", &b.beta);
 	c.alpha = a.alpha + b.alpha;
	c.beta = a.beta + b.beta;
	printf("%d + i%d", a.alpha, a.beta);
	printf("\n+\n%d + i%d", b.alpha, b.beta);
	printf("\n=%d + i%d", c.alpha, c.beta);
	return 0;
}
