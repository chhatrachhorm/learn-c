#include <stdio.h>
main()
{
	char alph;
	alph= getc (stdin);
	fflush (stdin);
	putc (alph, stdout);
}
