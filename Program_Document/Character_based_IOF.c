
/* function to accept and display a character */
/* Writer: Chhatra Chhorm on 14/12/16 */
#include <stdio.h>
main()
{ char alph;
printf("Program to accept and display a character: ");
alph= getc (stdin) ; /* accept a character */
fflush (stdin); /* clear the stdin buffer */
putc (alph, stdout); /* display a character */
}
