#include <stdio.h>
/* this program is written to build a simple calculator */
main ()
{
	float a, b, sum, multiplication, abstract, division;
	char sy_b;
	puts ("Welcome to CodeCal\n");
	scanf ("%f", &a);
	sy_b = getchar () ;
	fflush (stdin);	
	scanf ("%f", &b);
	printf ("a= %f" ,a);
	printf ("b= %f", b);
	putchar (sy_b);
}	
