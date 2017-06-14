#include <stdio.h>
/* Accept the name and address and display */
main ()
{
	char name [21] , adds [31];
	puts ("Enter your Name with a maximum of 20 characters");
	name = gets ();
	fflush (stdin);
	puts ("Enter your address with a mximum of 30 characters");
	adds = gets ();
	fflush (stdin);
	puts ("Your name is:");
	puts (name);
	puts ("Your address is:");
	puts (adds);
}
