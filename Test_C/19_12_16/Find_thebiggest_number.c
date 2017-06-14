
/* this program is written to find the biggest number of three numbers */
/* writer: Chhatra Chhorm on 19/12/16 */
#include <stdio.h>
main ()
{
	int a, b, c;
	puts ("Enter the value of the three numbers");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if ( a>=b && a>=c)
	printf("The greatest number is %d", a);
	else if (b>=a && b>=c )
	printf ("The greatest number is %d", b);
	else printf("The gratest number is %d", c);
	 /*if (a>b)
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
	} */
}
