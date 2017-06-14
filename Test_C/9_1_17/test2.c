//This program is written by Chhorm Chhatra on 09/01/2017 to reverse string and convert from lower case to upercase or in contrast 
#include <stdio.h>
main ()
{
	int i, j;
	char str[5], c;
	gets (str);
	fflush (stdin);
	puts (str);
	c = str[0];
	str[0] = str[3];
	str[3] = c;
	c = str[1];
	str[1] = str[2];
	str[2] = c;
	
	puts (str);
	
		
}

