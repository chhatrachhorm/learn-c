#include <stdio.h>
#include <math.h>
/* this program is written to calculate the distance has you travel within a 
specific amount of time */
main ()
{
	float Vf, t, a, d, e;
	puts ("Enter the value of Vf, t, a, to find the distance");
	scanf ("%f", &Vf);
	scanf ("%f", &t);
	scanf ("%f", &a);
	e = t*t;
	d = Vf * t + ( 0.5 * a * e ) ;
	printf ("the distance is %f", d);	
	
	
}
