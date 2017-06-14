#include <stdio.h>
int main ()
{
	int a, b, c;
	printf ("This program is to find the greatest number between 3 numbers");
	puts ("Enter the three numbers");
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	
	if (a>b)
	{
		if (a>c)
		{
			printf ("The greatest number is %d", a);
		}
		else
		{
			printf ("The greatest number is %d", c);
		}
	}
	else
	{
		if (b>c)
		{
			printf ("The greatest number is %d", b);
		}
		else
		{
			printf ("The greatest number is %d", c);
		}
	}
}
