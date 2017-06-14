/* This program is written to practice using nested for loop */
/* writer : Chhatra on 5/1/17 */
#include <stdio.h>
main ()
{
	int i, j, k, rows;
	//Five starts in the given numbers of rows
	printf("Enter the numbers of rows of five stars to be printed line by line: ");
	scanf("%d", &rows);
	for (i=1; i<=rows; i++)
	{
		printf("\n");
		for(j=1; j<=5; j++)
		printf("*");
	}
	printf("\n");
	//Five same numbers in the given numners of rows
	printf("Enter the numbers of rows of five numbers to be printed line by line: ");
	scanf("%d", &rows);
	for(i=1; i<=rows; i++)
	{
		printf("\n");
		for(j=1; j<=5; j++)
		printf("%d",i );
	}
	printf("\n");
	for(i=rows; i>=1; i--)
	{
		printf("\n");
		for(j=1; j<=5; j++)
		printf("%d", i);
	}
	printf("\n");
	//Right triangle stars in the given numbers of rows
	printf("Enter the numbers of rows of right triangle stars to be printed by lines: ");
	scanf("%d", &rows);
	for(i=1; i<=rows; i++)
	{
		printf("\n");
		for(j=1; j<=i; j++)
		printf("*");
	}
	printf("\n");
	for(i=rows; i>=1; i--)
	{
		printf("\n");
		for(j=1; j<=i; j++)
		printf("*");
	}
	printf("\n");
	//Down right triangle numbers in the given numbers of rows
	printf("Enter the numbers of rows of right triangle numbers to be printed by lines: ");
	scanf("%d", &rows);
	for(i=1; i<=rows; i++)
	{
		printf("\n");
		for(j=1; j<=i; j++)
		printf("%d", i);
	}
	printf("\n");
	for(i=rows; i>=1; i--)
	{
		printf("\n");
		for(j=1; j<=i; j++)
		printf("%d",i);
	}
	
	printf("\n");
	//Mirror right triangle stars in the given numbers of rows
	printf("Enter the numbers of rows of mirror right triangle stars and numbers to be printed by lines: ");
	scanf("%d", &rows);
	for(i=rows; i>=1; i--)
	{
		printf("\n");
		for(k=0; k<rows-i; k++)
		printf(" ");
		for(j=1; j<=i; j++)
		printf("*");
	}
	for(i=rows; i>=1; i--)
	{
		printf("\n");
		for(k=0; k<rows-i; k++)
		printf(" ");
		for(j=1; j<=i; j++)
		printf("%d", i);
			
	
	}
}

