/*------------------
This program was written on Dec 15, 2016
-Used to learn the different between putc and putchar, getc and getchar
--------------------*/

#include <stdio.h>

/* function to input and display a character twice using the function getchar() */

main(){

	char c;

	c = getchar();
	fflush(stdin); //-- Clear the buffer
	putc (c, stdout);
	putchar (c);

}
