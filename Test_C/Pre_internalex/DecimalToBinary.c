#include <stdio.h>
int main ()
{
	int de, bi=0, ans=0, remind, unit;
	printf ("Enter the decimal number: ");
	scanf ("%d", &de);
	while (de>0)
	{
		remind = de % 2;
		ans = ans * 10 + remind;
		de = de / 2;
/*	}
	printf ("The number is %d", ans);
	while (ans>0)
	{ 
		unit = ans % 10;
		bi = bi * 10 + unit;
		ans = ans / 10;
	*/}
	printf ("The number is %d", bi);

}
