#include <stdio.h>
#include <math.h>
#define pi 3.1415
//This program is written by Chhorm Chhatra to find the roots of cubic equation 
main ()
{
	float alpha, a, b, c, d, p, q, m, x[3];
	int i;
	printf ("Enter the number for each constant of this equation: ax^3 + bx^2 + cx + d = 0");
	for (i = 0; i<4; i++)
	{
		scanf("%f, %f, %f, %f", &a, &b, &c, &d);
	}
	p = (c/a) - pow(b, 2)/(3 * pow(a, 2));
	q = (2 * pow(b, 3)) / ( 27 * pow(a, 3)) - (b * c)/(3 * pow(a, 2)) + d / a;
	
	m = 2 * sqrt ((-p/3));
	alpha = (acos ((3 * q)/(m * p))) / 2;
	 x[0] = m * cos(alpha) - b /(3 * a);
	 x[1] = m * cos(alpha + (2 * pi) / 3) - b /(3 * a);
	 x[3] = m * cos(alpha + (4 / pi) / 3) - b /(3 * a);
	for (i=0; i<=2; i++)
	{
		printf ("x%d is %f", i, x[i]);
	}
	 
	
}
