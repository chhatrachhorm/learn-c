#include <stdio.h>
/* this program is wrtten to find the roots of 2nd degree of math equations */
main ()
{
	float a, b, c, telta, x1, x2;
	puts ("by follow this general form : ax^2 + bx + c = 0, please enter the number of \n");
	printf ("a=\n");
	scanf ("%f", &a);
	printf("b=\n");
	scanf ("%f", &b);
	printf("c=\n");
	scanf ("%f", &c);
	if (a + b + c ==0)
	{
		x1 = 1;
		x2 = c / a;
		printf ("the roots are %f", x1, x2 );
	}
	else 
	{
		telta = b*b - 4*a*c;
		x1 = (b + squart(telta)) / 2*a ;
		x2 = (b - squart(telta)) / 2*a ;
		printf ("%f", x1, x2);
	}
}
