/* This program is written to complete using if-else */
/* Writer: Chhatra Chhorm on 18/12/16 */
#include <stdio.h>
main ()
{
	char inp;
	puts ("Enter grade code:");
	inp = getchar ();
	fflush (stdin);
	if (inp == 'A')
		puts ("HRA percentage is 45");
	else if (inp == 'B')
		puts ("HRA percentage is 40");
	else if (inp == 'C')
		puts ("HRA percentage is 30");
	else if (inp == 'D')
		puts ("HRA percentage is 25");
	else
		puts ("Invalid Grade Code");
}
