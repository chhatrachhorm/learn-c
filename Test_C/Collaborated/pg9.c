/*------------------
This program was written on Dec 15, 2016
-Used to learn about fflush
--------------------*/

#include <stdio.h>

/* function to accept and display two character */

main(){

	char c, d;

	c = getchar();
	fflush(stdin); //-- Clear the buffer
	d = getchar();
	fflush(stdin); //-- Clear the buffer
	putc (c, stdout);
	putchar (d);

}
