//This program  is written by Chhorm Chhatra on 9/01/2017 to diplay ten multiplication tables
#include <stdio.h>
main ()
{
	int i, j, ans = 1;
	for (i=1; i<=10 ; i++)
	{
		for (j=1; j<=10; j++)
		{
			ans = i * j;
			printf("%d * %d = %d\n", i, j, ans);
		}
		for (j=1; j<10; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
