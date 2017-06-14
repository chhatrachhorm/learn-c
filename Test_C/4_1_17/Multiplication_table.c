/* this program is written to practice the nested for loop */
/* writer: Chhatra Chhorm on 4/1/17 */
#include <stdio.h>
main ()
{
	int multi, ans=1, i;
	puts ("This is the program to find the multiplication table of a given number");
	puts ("Enter the number: ");
	scanf ("%d", &multi);
	for (i=1; i<=10; i++)
	{
		ans = multi * i;
		printf("%d * %d = %d", multi, i, ans);
		puts (" ");
	}
}
