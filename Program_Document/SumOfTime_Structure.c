//Program to Sum of time
//Practice structure
//Written by Chhorm Chhatra on 31/01/2017
#include<stdio.h>
struct timing{
	int year, week, day, hour, minute;
}a, b, sum;
main()
{
	printf("Time Calculation: \n");
	printf("First Timing: \n");
	printf("Year: ");scanf("%d", &a.year);
	printf("Week: ");scanf("%d", &a.week);
	printf("Day: ");scanf("%d", &a.day);
	printf("HOur: ");scanf("%d", &a.hour);
	printf("Minute: ");scanf("%d", &a.minute);
	printf("Second Timing: \n");
	printf("Year: ");scanf("%d", &b.year);
	printf("Week: ");scanf("%d", &b.week);
	printf("Day: ");scanf("%d", &b.day);
	printf("HOur: ");scanf("%d", &b.hour);
	printf("Minute: ");scanf("%d", &b.minute);
	
	sum.year = a.year + b.year;
	sum.week = a.week + b.week;
	sum.day = a.day + b.day;
	sum.hour = a.hour + b.hour;
	sum.minute = a.minute + b.minute;
	while(sum.minute>=60)
	{
		++sum.hour;
		sum.minute -= 60;
	}
	while(sum.hour>=24)
	{
		++sum.day;
		sum.hour -= 24;
	}
	while(sum.day>=7)
	{
		++sum.week;
		sum.day -= 7;
	}
	while(sum.week>=52)
	{
		++sum.year;
		sum.week -= 52;
	}
	printf("The sum is %d Y, %d W, %d D, %d h, %d min", sum.year, sum.week, sum.day, sum.hour, sum.minute);
}
