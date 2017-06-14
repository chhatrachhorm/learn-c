#include<stdio.h>
main()
{
	int ans = 1, j, i;
	printf("Multiplication Table\n");
	for(i=1; i<=12; i++)
	{
		for(j=1; j<=12; j++)
		{
			ans = i * j;
			printf("%d\t", ans);
		}
		printf("\n");
	}
}
