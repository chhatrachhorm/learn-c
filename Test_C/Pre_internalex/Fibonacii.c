#include <stdio.h>
int main ()
{
	int fn1, fn2, fn3, n;
	printf ("Enter the first and second number of the Febonacii series");
	scanf ("%d", &fn1);
	scanf ("%d", &fn2);
	printf ("%d\n,%d\n", fn1 , fn2);
	while(n<98)
	{
		fn3 = fn1 + fn2;
		printf (",%d\n",fn3);
		fn1 = fn2;
		fn2 = fn3;
		n++;
	}
}
