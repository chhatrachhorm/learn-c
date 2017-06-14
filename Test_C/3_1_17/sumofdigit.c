/* this program is written to do the sum of the digits of a given number */
/* writer: Chhatra Chhorm on 3/1/17 */
#include <stdio.h>
main ()
{
	int num, r, sum = 0, giv;
	printf ("Enter the number to do the some of the digits: ");
	scanf ("%d", &num);
	giv = num;
	while (num)
	{
		r = num % 10;
		sum = sum + r;
		num= num / 10;
	}
	printf ("The sum of digits of %d is %d", giv, sum);
}
