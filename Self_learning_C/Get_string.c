#include <stdio.h>
#include <stdlib.h>
 int main ()
 {
 	char firstName [20], crush [20];
 	int numberOfBabies;
 	
 	printf("What is your name? \n");
 	scanf("%s", firstName);
 	
 	printf("Who are you going to marry? \n");
 	scanf("%s", crush);
 	
 	printf("How many kids will you have ? \n");
 	scanf ("%d", &numberOfBabies);
 	printf ("");
 	return 0;
 }
