
/* this program is written to get the name and display a message */
/* writer: Chhatra Chhorm 15/12/16  */
#include <stdio.h>
main ()
{
	char in_str [26];
	puts ("Enter your name with a maximum of 25 characters");
	gets (in_str);
	fflush (stdin);
	puts ("Hello! How are you, today?");
	puts (in_str);

}
