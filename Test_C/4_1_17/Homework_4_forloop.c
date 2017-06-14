/* this program is written to practice the nested for loop */
/* writer: Chhatra Chhorm on 4/1/17 */
#include <stdio.h>
main ()
{
	int i, j, k;
	for (i=5; i>0; i--)
	{
		for (j=0; j<5-i; j++)
		{
			printf(" ");
		}
		for (k=0; k<i; k++)
		{
			printf ("%d", i);
		}
		printf ("\n");
	}
}
