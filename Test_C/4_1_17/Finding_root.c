/* this program is written to find the roots of an equation */
/* writer: Chhatra Chhorm on 4/1/17 */
#include <stdio.h>
#include <math.h>
main ()
{
	float a, b, c, x1, x2, telta, alpha, beta;
	printf ("f(x) = ax^2 + bx + c\n");
	printf ("Enter the number of constant a : \n");
	scanf ("%f", &a);
	printf ("Enter the number of constant b : \n");
	scanf ("%f", &b);
	printf ("Enter the number of constant c : \n");
	scanf ("%f", &c);
	telta = b * b - 4 * a * c;
	if ( telta < 0 )
	{
		alpha = -b/(2*a);
		beta = sqrt(-telta) / 2 * a;
		printf("x = %.3f + %.3fi\n", alpha, beta);
		printf("x = %.3f - %.3fi", alpha, beta);
	}
	else
	{
		x1 = (-b + sqrt(telta)) / (2*a);
		x2 = (-b - sqrt(telta)) / (2*a);
		printf(" x1= %.3f \n", x1);
		printf(" x2= %.3f \n", x2);


	}

}
