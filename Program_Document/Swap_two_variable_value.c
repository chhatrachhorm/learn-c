#include <stdio.h>
/* this program is written to swap the value of two variables */
main ()
{
	int a, b, c;
	printf ("Enter the value for variable a = ");
	scanf ("%d", &a);
	printf ("Enter the value for variable b = ");
	scanf ("%d", &b);
	c = a;
	a = b;
	b = c;
	printf ("The value of variable a is %d\n", a);
    printf ("The value of variable b is %d", b);
	/* if (a<b)
	{
		c = b - a;
		b = b - c;
		a = b + c;
		printf ("The value of variable a is %d\n", a);
		printf ("The value of variable b is %d", b);
	}
	else
	{
		c = a - b;
		a = a - c;
		b = b + c;
		printf ("The value of variable a is %d\n", a);
		printf ("The value of variable b is %d", b);

	} */


}

