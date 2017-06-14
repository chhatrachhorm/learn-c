/* this program is written to find the simple interest */
/* Writer: Chhatra Chhorm on 13/12/16 */
#include<stdio.h>
main()
{
	float a, b, c, SI;
	printf("find the simple interest\n");
	printf("enter the number of years: ");
	scanf("%f",&a);
	printf("enter the rate of interest: ");
	scanf("%f",&b);
	printf("enter the principle amount: ");
	scanf("%f",&c);
	SI = (a * b * c) / 100;
	printf("the simple interest is %f",SI);
}
