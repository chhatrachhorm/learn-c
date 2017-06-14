/* this program is written to convert from celcuis to fahrenheit */
#include<stdio.h>
main()
{
	float C, F;
	printf("convert from celcuis to fahrenheit");
	printf("\n> enter the celcuis value\n");
	scanf("%f",&C);
	F=C*1.8+32;
	printf("F= %f",F);
}
