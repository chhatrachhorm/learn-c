/*------------------
This program was written on Dec 15, 2016
-Used to learn getchar and putchar
--------------------*/

#include <stdio.h>

/* function to input and display a character using the function getchar() */

main(){

	char c;

	c = getchar();
	fflush(stdin); //-- Clear the buffer
	putchar (c);

}
