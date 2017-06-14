#include <stdio.h>
int main ()
{
	int km, m;
	puts ("Enter the distance in Kilometers");
	scanf ("%d",&km);
	m = km * 1000;
	printf ("The distance in meters is %d", m);
}
