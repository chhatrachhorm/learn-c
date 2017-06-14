#include <stdio.h>
int main ()
{
	int n, r=0;
	
	for (n=0; n<11; n++)
	{
		r = n * 12;
		printf ("12 * %d = %d", n, r);
		puts (" ");
	}
}
