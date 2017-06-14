
/* this program is written to display the given input twice */
/* writer Chhatra Chhorm 15/12/16 */
#include <stdio.h>
main ()
{
	char c;
	puts("display the given character twice");
	c = getchar ();
	fflush (stdin);
	putchar (c);
	putchar (c);
}
