/* Program to add the score of five subjects and find the average and tell whether the student is failed or passed */
/* This program is written by Chhatra Chhorm on 12/12/16 */

#include<stdio.h>

main()
{
	int a, b, c, d, e, f, g;
	printf("Enter the score for maths: ");
	scanf("%d",&a);
	printf("Enter the score for khmer litaracy: ");
	scanf("%d",&b);
	printf("Enter the score for science: ");
	scanf("%d",&c);
	printf("Enter the score for social science: ");
	scanf("%d",&d);
	printf("Enter the score for PE: ");
	scanf("%d",&e);
	f=a+b+c+d+e;
	printf("the total mark is %d\n",f);
	g=f/8;
	printf("the average is %d\n",g);
	if(g<25)printf("you are failed\n");
	if(a<67.5)printf("you failed at maths, do you know why? It's because you did not pay attention during classes!");



}
