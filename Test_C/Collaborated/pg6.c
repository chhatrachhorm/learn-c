/*------------------
This program was written on Dec 15, 2016
-Used to learn about getc and putc
--------------------*/

#include<stdio.h>

/* function to accept and display a character */

main(){
	char alph;
	alph = getc(stdin); //--accept a character
	fflush (stdin); //-- clear the stdin buffer
	putc(alph, stdout); //-- display a character

}
