#include <stdio.h>
main ()
{
	int a, b, c, ans, result;
	printf ("Enter the three number");
	scanf (" %d %d %d", &a, &b, &c);
	ans = (a>b)? a: b;
	result = (ans>c)?  ans: c;
	printf ("result %d", result);

}
