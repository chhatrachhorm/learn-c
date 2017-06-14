/* This program is written to find the factoriel value of a given number */
/* writer: Chhatra Chhorm on 3/1/17 */
#include <stdio.h>
main ()
{
	int num, multi, ans;
	puts ("Enter the number to the factoriel of it");
	scanf ("%d", &num);
	ans = 1;
	/*for ( multi = num; multi != 1; multi--)
	{
		ans = ans * multi;
	}
	 */
	for (multi = 1; multi <= num; multi++)
	{
		ans = ans * multi;
	}
	printf ("The factoriel of the given number is %d", ans);
}
