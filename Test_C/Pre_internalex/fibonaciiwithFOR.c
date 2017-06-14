#include <stdio.h>
int main ()
{
	int fn1=0, fn2=1, fn3, n;
	for (n=1; n<=100; n++)
	{
		if (n==1)
		{
			printf ("%d\n",fn1);
			continue;
		}
		if (n==2)
		{
			printf ("%d\n",fn2);
			continue;
		}
			fn3 = fn2 + fn1;
			printf ("%d\n",fn3);
			fn1 = fn2;
			fn2 = fn3;
	}

}
