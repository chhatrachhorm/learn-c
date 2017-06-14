#include <stdio.h>
/* function to input and display a character using 
the function getchar () */
main ()
{ char c;
	c = getchar ();
	fflush (stdin);	/* chear the buffer */
	putchar (c);
	
}
