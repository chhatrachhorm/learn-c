/* this program is written to practice the nested for loop */
/* writer: Chhatra Chhorm on 4/1/17 */
#include <stdio.h>
int main ()
{
	int a, b, q, r;
	printf ("Enter the first and second number to get the qution and the remainder");
	scanf ("%d",&a);
	scanf ("%d",&b);
	if (a<b)
	{
		printf ("The first number must be greater than the second one!");
	}
	else
	{
		q = a / b;
		r = a % b;
		printf ("The quotient of %d divide by %d is %d", a, b, q);
		printf ("The remainder of %d divide by %d is %d", a, b, r);
	}
}
