/* This program is written to find whether a given number is negative or positive */
/* Writer: Chhatra Chhorm on 3/1/17 */
#include <stdio.h>
main ()
{
	int num;
	puts ("Enter the number to find whether the number is positive of negative");
	scanf ("%d", &num);
	if ( num > 0)
	printf ("%d is positive", num);
	else if ( num < 0)
	printf ("%d is negative", num);
	else printf("You have entered 0");
}
