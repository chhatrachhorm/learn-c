/*Program to display 
 # # # #
# # # #
 # # # #
# # # #
 # # # #
# # # #
 # # # #
# # # #
*/
//Program written by Chhorm Chhatra on 16/01/2016 
#include <stdio.h>
main ()
{
	int i, j, row;
	printf("Enter number of rows: ");
	scanf("%d", &row);
	for(i=0; i<row/2; i++)
	{
		for(j=0; j<4; j++)
		{
			printf(" #");
		}
		printf("\n");
		for(j=0; j<4; j++)
		{
			printf("# ");
		}
		printf("\n");
	}

}
