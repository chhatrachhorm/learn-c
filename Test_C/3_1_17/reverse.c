/* this program is written to reverse a given number */
/* writer: Chhatra Chhorm on 3/1/2017*/
#include <stdio.h>
main ()
{
	int num, unit, ans, giv;
	ans = 0;
	puts ("Enter the number to to reverse");
	scanf ("%d", &num);
	giv = num;
	while (num)
	{
		unit = num % 10;
		ans = ans * 10 + unit;
		num = num / 10;
	}
	printf("The reversed number of %d is %d", giv, ans);
/*while (num !=0 )
	{
		unit = num % 10;
		ans = ans * 10 + unit;
		num = num / 10;
	}
	printf("The reversed number of %d is %d", giv, ans);*/
}
