#include <stdio.h>
main ()
{
	int i, a[5];
	printf("Enter the values for array\n");
	for (i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	
	}
	printf("The array values are: \n");
	for (i=0; i<5; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}
}
