#include <stdio.h>
int main ()
{
	int u, n, rev=0;
	printf ("Enter the number to be reversed");
	scanf ("%d",&n);
	while (n != 0)
	{
		u = n % 10;
		rev = rev * 10 + u;
		n = n / 10;
	}
	printf ("the reversion of %d", rev);
}
