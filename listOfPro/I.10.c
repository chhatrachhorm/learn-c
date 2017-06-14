#include<stdio.h>
//Quadratic equation 
int main()
{
	int a, b, c, telta;
	float x1, x2, alpha, beta;
	printf("ax^2 + bx + c = 0");
	printf("\nEnter each value of a, b, c to find the roots: \n");
	scanf("%d %d %d", &a, &b, &c);
	telta = b * b - 4 * a * c;
	if(telta>0)
	{
		x1 = (-b + sqrt(telta)) / (2 * a);
		x2 = (-b - sqrt(telta)) / (2 * a);
		printf("x1 = %.2f\nx2 = %.2f", x1, x2);
	}
	else if(telta<0)
	{
		alpha = - b / (2 * a);
		beta = sqrt(-telta)/(2 * a);
		printf("x1 = %.2f + %.2fi", alpha, beta);
		printf("\nx2 = %.2f - %.2fi", alpha, beta);
	}
	else if(telta == 0)
	{
		x1 = - b / (2 * a);
		printf("x = %.2f", x1);
	}
	return 0;
}
