/* This program is written to find the sum of arithmetic sequence */
/* Writer: Chhatra Chhorm on 19/12/16 */
#include <stdio.h>
main ()
{
	int i, sum = 0;
	printf ("Enter the value of i to do the arithmetic sum: ");
	scanf ("%d",&i);
	while (i<10)
	{
		sum = sum + i;
		i++;
	}
	printf("The sum is %d", sum);
}

