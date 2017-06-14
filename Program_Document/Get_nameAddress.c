
/* Accept the name and address and display */
/* Writer: Chhatra Chhorm on 15/12/2016*/
#include <stdio.h>
main ()
{
	char name [21] , adds [31];
	puts ("Enter your Name with a maximum of 20 characters");
	gets (name);
	fflush (stdin);
	puts ("Enter your address with a maximum of 30 characters");
	gets (adds);
	fflush (stdin);
	puts ("Your name is:");
	puts (name);
	puts ("Your address is:");
	puts (adds);
}
