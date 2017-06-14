/* this program is written to convert from celcuis to fahrenheit */
/* Writer: Chhatra Chhorm 13/12/16 */
#include<stdio.h>
main()
{
	float C, F;
	printf("convert from celcuis to fahrenheit\n");
	printf("enter the value of celcuis degree: ");
	scanf("%f",&C);
	F=C * 1.8 + 32;
	printf("%f(c)= %f(f)",C, F);
}
