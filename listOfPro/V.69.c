//Calculate difference between two time period 
#include<stdio.h>
struct cal{
	int m, h, d, w, month, year;
}first, second, all;
int main()
{
	printf("Enter the first time period: \n");
	printf("Minutes: "); scanf("%d", &first.m);
	printf("Hour: "); scanf("%d", &first.h);
	printf("Day: "); scanf("%d", &first.d);
	printf("Week: "); scanf("%d", &first.w);
	printf("Month: "); scanf("%d", &first.month);
	printf("Year: "); scanf("%d", &first.year);
	printf("Enter the second time period: \n");
	printf("Minutes: "); scanf("%d", &second.m);
	printf("Hour: "); scanf("%d", &second.h);
	printf("Day: "); scanf("%d", &second.d);
	printf("Week: "); scanf("%d", &second.w);
	printf("Month: "); scanf("%d", &second.month);
	printf("Year: "); scanf("%d", &second.year);
	all.m = first.m - second.m;
	all.h = first.h - second.h;
	all.d = first.d - second.d;
	all.w = first.w - second.w;
	all.month = first.month - second.month;
	all.year = first.year - second.year;
	while(all.m>=60)
	{
		all.h++;
		all.m -= 60; 
	}
	while(all.h>=24)
	{
		all.d++; all.h -=24;
	}
	while(all.d>=7)
	{
		all.w++; all.d -= 7;
	}
	while(all.w>=4)
	{
		all.month++; all.w -= 4;
	}
	while(all.month>=12)
	{
		all.year++; all.month -= 12;
	}
	printf("The difference of the first and second time period is\n");
	printf("%dmn %dh %dday %dw %dmonth %dyear", all.m, all.h, all.d, all.w, all.month, all.year);

			
}
